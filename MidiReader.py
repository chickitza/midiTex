import mido
import xml.etree.ElementTree as ET
from statistics import mode

bpm = 120
notes = ['c', '#c', 'd', '#d', 'e', 'f', '#f', 'g', '#g', 'a', '#a', 'b']


def convert_midi_to_xml(filename):
    # 读取MIDI文件
    mid = mido.MidiFile(filename)

    global bpm
    for msg in mid:
        if msg.type == 'set_tempo':
            bpm = mido.tempo2bpm(msg.tempo)
            break

    # 创建XML根元素
    root = ET.Element('tracks')

    # 遍历每个轨道
    for track_index, track in enumerate(mid.tracks):
        # 创建track元素
        track_element = ET.SubElement(root, 'track')
        track_element.set('index', str(track_index))
        track_element.set('name', track.name)

        message_element = ET.SubElement(track_element, 'messages')

        # 记录轨道乐器编号
        program_change = 0
        time = 0

        # 1 遍历midi文件，获取message
        for msg in track:
            time += msg.time
            if msg.type == 'note_on':
                # 音符开始
                note = ET.SubElement(message_element, 'note_on')
                note.set('pitch', str(msg.note))
                note.set('time', str(time))
                note.set('velocity', str(msg.velocity))
                # todo channel与鼓
                # note.set('channel', str(msg.channel))
            elif msg.type == 'note_off':
                # 音符结束
                note = ET.SubElement(message_element, 'note_off')
                note.set('pitch', str(msg.note))
                note.set('time', str(time))
                note.set('velocity', str(msg.velocity))
            elif msg.type == 'program_change':
                # 记录轨道乐器编号
                program_change = msg.program
        # 添加乐器编号到track元素
        track_element.set('program', str(program_change))

        # 2 遍历message，转化为音符
        notes_element = ET.SubElement(track_element, 'notes')

        notes_set = {}
        note_id = 0
        for note in message_element:
            if note.tag == 'note_on':
                pitch = note.get('pitch')
                notes_set[pitch] = {}
                notes_set[pitch]['start'] = note.get('time')
                notes_set[pitch]['velocity'] = note.get('velocity')
            elif note.tag == 'note_off':
                pitch = note.get('pitch')
                if pitch in notes_set:
                    start = notes_set[pitch]['start']
                    end = note.get('time')
                    velocity = notes_set[pitch]['velocity']
                    if velocity != '0':
                        note = ET.SubElement(notes_element, 'note')
                        note.set('id', 'n'+str(note_id))
                        note.set('pitch', pitch)
                        note.set('start', start)
                        note.set('end', end)
                        note.set('duration', str(int(end) - int(start)))
                        note.set('velocity', velocity)
                        note_id += 1
                    notes_set.pop(pitch)

        # 3 创建时间段列表

        # 创建存放start和end的数组
        time_values = []
        time_segments = []

        # 遍历所有note元素，将start和end添加到数组中
        for note in notes_element:
            start = int(note.get('start'))
            end = int(note.get('end'))
            time_values.append(start)
            time_values.append(end)

        # 去除重复值并按从小到大排序
        time_values = sorted(set(time_values))

        last_stamp = 0
        for time_stamp in time_values:
            time_segments.append([last_stamp, time_stamp])
            last_stamp = time_stamp

        # 计算每段包含的音符数量
        for segment in time_segments:
            segment.append(0)
            for note in notes_element:
                start = int(note.get('start'))
                end = int(note.get('end'))
                if not (end <= segment[0] or start >= segment[1]):
                    segment[2] += 1
        print(time_segments)

        # 4 如果一个音在超过一段里，则包含它的所有段合并为一个红段
        for note in notes_element:
            start = int(note.get('start'))
            end = int(note.get('end'))
            segment_count = 0
            segments_set = []
            segments_left = 0
            segments_right = 0
            first_flag = True
            for i, segment in enumerate(time_segments):
                if not (end <= segment[0] or start >= segment[1]):
                    if first_flag:
                        segments_left = segment[0]
                        segments_right = segment[1]
                        first_flag = False
                    else:
                        segments_left = min(segments_left, segment[0])
                        segments_right = max(segments_right, segment[1])
                    segment_count += 1
                    segments_set.append(i)
            if segment_count > 1:
                for i in segments_set[::-1]:
                    time_segments.pop(i)
                time_segments.insert(i, [segments_left, segments_right, -3])

        # 5 合并相邻的1，0表示休止，1表示合并后的单音序列，2表示和弦，3表示不规则序列
        last_segment = []
        length = len(time_segments)
        for i, segment in enumerate(time_segments[::-1]):
            if i == 0:
                last_segment = segment
                continue
            if last_segment[2] == 1 and segment[2] == 1:
                segment[1] = last_segment[1]
                time_segments.pop(length - i)
            last_segment = segment
        print(time_segments)

        # 6 输出到XML并记录每个分段包含的note ID
        segments_element = ET.SubElement(track_element, 'segments')
        segment_id = 0
        for segment in time_segments:
            seg_element = ET.SubElement(segments_element, 'segment')
            seg_element.set('id', 's'+str(segment_id))
            segment_id += 1
            seg_element.set('start', str(segment[0]))
            seg_element.set('end', str(segment[1]))
            seg_element.set('duration', str(segment[1] - segment[0]))
            if segment[2] == 0:
                seg_element.set('type', '0')
            elif segment[2] == 1:
                seg_element.set('type', '1')
            elif segment[2] >= 2:
                seg_element.set('type', '2')
            elif segment[2] == -3:
                seg_element.set('type', '3')
            note_id_element = ET.SubElement(seg_element, 'notes_id')
            for note in notes_element:
                start = int(note.get('start'))
                end = int(note.get('end'))
                if not (end <= segment[0] or start >= segment[1]):
                    ET.SubElement(note_id_element, str(note.get('id')))
    # 创建XML文档
    tree = ET.ElementTree(root)

    # 开始生成midiTex字符串
    midi_info_string = filename.replace('.mid', ', bmp=').split("/")[-1]+str(bpm)
    midi_t_string = ' ,t='
    midi_v_string = ' ,v=72'
    midi_d_string = ' ,d=1/4'
    tracks_info_string = ""
    track_info_string_set = []
    notes_info_string = ""
    note_info_string_set = []
    # 统计转调t参数
    pitches = []
    for track_element in root:
        notes_element = track_element.find("notes")
        for note in notes_element:
            pitches.append(int(note.get("pitch")))

    black_num_min = 10000
    best_trans = 0
    trans = [6,-5,5,-4,4,-3,3,-2,2,-1,1,0]
    for i in trans:
        black_num = 0
        for pitch in pitches:
            new_pitch = pitch + i
            num = new_pitch % 12
            if num == 1 or num == 3 or num == 6 or num == 8 or num == 10:
                black_num += 1
        if black_num <= black_num_min:
            black_num_min = black_num
            best_trans = i
    # print(best_trans, black_num_min)
    midi_t_string = midi_t_string + str(-best_trans)

    # 转调
    for track_element in root:
        notes_element = track_element.find("notes")
        for note in notes_element:
            note.set("pitch", str(int(note.get("pitch"))+best_trans))

    # 遍历音轨
    for track_element in root:
        track_index = track_element.get("index")
        track_name = track_element.get("name")
        track_program = track_element.get("program")
        # 统计最常见的拍数、音量
        notes_element = track_element.find("notes")
        beats_set = []
        velocity_set = []
        for note in notes_element:
            duration = note.get("duration")
            beats = duration2beat(duration)
            velocity = note.get("velocity")
            beats_set.append(beats)
            velocity_set.append(velocity)
        if len(beats_set) == 0:
            default_beat = 1
        else:
            default_beat = mode(beats_set)
        if len(velocity_set) == 0:
            default_velocity = '72'
        else:
            default_velocity = mode(velocity_set)
        # 设置d,v参数
        track_info_string = track_index + ": " + track_program + ", track" + track_index + ", d=" + str(default_beat) + ", v=" + str(int(default_velocity)-72)

        note_info_string = track_index + ": "
        segments_element = track_element.find("segments")
        note_refer = 62
        rising = True
        first_note = True
        for segment in segments_element:
            # 将第一个休止符转化为音轨o元素
            segment_id = segment.get("id")
            segment_start = segment.get("start")
            segment_end = segment.get("end")
            segment_type = segment.get("type")
            segment_duration = segment.get("duration")
            # todo 分类处理segment
            if segment_type == '0':
                beat = duration2beat(segment_duration)
                if beat == 0:
                    continue
                if beat == default_beat:
                    note_info_string += "*"
                else:
                    note_info_string += "["+str(convert_float(beat))+"]*"
            elif segment_type == "1":
                # 音符序列处理
                notes_id = segment.find("notes_id")
                for note_id in notes_id:
                    for note in notes_element:
                        if note.get("id") == note_id.tag:

                            note_pitch = int(note.get("pitch"))
                            note_duration = note.get("duration")
                            note_beat = duration2beat(note_duration)
                            note_velocity = note.get("velocity")

                            if first_note:
                                count = fit_in_range(note_pitch, 57, 68)
                                track_info_string += ", t=" + str(count * 12)
                                first_note = False
                            else:
                                if note_pitch == note_refer:
                                    note_info_string += "-"
                                elif rising:
                                    count = fit_in_range(note_pitch, note_refer + 1, note_refer + 12)
                                    while count >= 1:
                                        note_info_string += "!"
                                        count -= 1
                                    if count <= -1:
                                        note_info_string += ";"
                                        rising = False
                                        count = fit_in_range(note_pitch, note_refer - 12, note_refer - 1)
                                        while count <= -1:
                                            note_info_string += "!"
                                            count += 1
                                else:
                                    count = fit_in_range(note_pitch, note_refer - 12, note_refer - 1)
                                    while count <= -1:
                                        note_info_string += "!"
                                        count += 1
                                    if count >= 1:
                                        note_info_string += ";"
                                        rising = True
                                        count = fit_in_range(note_pitch, note_refer + 1, note_refer + 12)
                                        while count >= 1:
                                            note_info_string += "!"
                                            count -= 1
                            note_refer = note_pitch

                            if note_velocity != default_velocity:
                                note_info_string += "\\" + note_velocity
                            if note_beat != default_beat:
                                note_info_string += "["+str(convert_float(note_beat))+"]"
                            note_info_string += notes[note_pitch % 12]
            elif segment_type == "2":
                # 和弦处理
                notes_id = segment.find("notes_id")
                chord_notes = []
                chord_note_velocity = {}
                chord_info_string = ""
                pre_string = ""
                chord_beat = 0
                for note_id in notes_id:
                    for note in notes_element:
                        if note.get("id") == note_id.tag:
                            note_pitch = int(note.get("pitch"))
                            note_duration = note.get("duration")
                            note_velocity = note.get("velocity")

                            chord_beat = duration2beat(note_duration)
                            chord_notes.append(note_pitch)
                            chord_note_velocity[note_pitch] = note_velocity
                chord_notes.sort(reverse=True)

                chord_velocity = mode(list(chord_note_velocity.values()))

                first_note_in_chord = True
                chord_refer = 62
                for chord_note in chord_notes:
                    note_velocity = chord_note_velocity[chord_note]
                    if first_note_in_chord:
                        first_note_in_chord = False
                        if first_note:
                            count = fit_in_range(chord_note, 57, 68)
                            track_info_string += ", t=" + str(count * 12)
                            first_note = False
                        else:
                            if chord_note == note_refer:
                                pre_string = "-"
                            elif rising:
                                count = fit_in_range(chord_note, note_refer + 1, note_refer + 12)
                                while count >= 1:
                                    pre_string += "!"
                                    count -= 1
                                if count <= -1:
                                    pre_string += ";"
                                    rising = False
                                    count = fit_in_range(chord_note, note_refer - 12, note_refer - 1)
                                    while count <= -1:
                                        pre_string += "!"
                                        count += 1
                            else:
                                count = fit_in_range(chord_note, note_refer - 12, note_refer - 1)
                                while count <= -1:
                                    pre_string += "!"
                                    count += 1
                                if count >= 1:
                                    pre_string += ";"
                                    rising = True
                                    count = fit_in_range(chord_note, note_refer + 1, note_refer + 12)
                                    while count >= 1:
                                        pre_string += "!"
                                        count -= 1
                        note_refer = chord_note
                    else:
                        count = fit_in_range(chord_note, chord_refer - 12, chord_refer - 1)
                        while count <= -1:
                            chord_info_string = "!" + chord_info_string
                            count += 1
                    chord_refer = chord_note

                    chord_info_string = notes[chord_note % 12] + chord_info_string
                    if note_velocity != chord_velocity:
                        chord_info_string = "\\" + note_velocity + chord_info_string
                    # if note_beat != default_beat:
                    #     note_info_string += "[" + str(convert_float(note_beat)) + "]"
                if chord_velocity != default_velocity:
                    pre_string += "\\" + chord_velocity
                if chord_beat != default_beat:
                    pre_string += "[" + str(convert_float(chord_beat)) + "]"
                note_info_string += pre_string + "{" + chord_info_string + "}"
            elif segment_type == "3":
                # todo 考虑递归处理
                note_info_string += "[" + str(duration2beat(segment_duration)) + "]*"
                print("???")

        note_info_string_set.append(note_info_string)
        track_info_string_set.append(track_info_string)


    # 输出midiTex
    midi_info_string = midi_info_string + midi_t_string + midi_d_string + midi_v_string
    first_track = True
    for track_info_string in track_info_string_set:
        if first_track:
            first_track = False
        else:
            tracks_info_string += "\n"
        tracks_info_string += track_info_string
    first_track = True
    for note_info_string in note_info_string_set:
        if first_track:
            first_track = False
        else:
            notes_info_string += "\n"
        notes_info_string += note_info_string
    print(midi_info_string)
    print("%%%")
    print(tracks_info_string)
    print("%%%")
    print(notes_info_string)

    # 将XML写入文件
    output_filename = filename.replace('.mid', '.xml')
    tree.write(output_filename)


def duration2beat(duration):
    global bpm
    return int(duration) / 4 / bpm


def convert_float(number):
    if number.is_integer():
        return int(number)
    else:
        return number


def fit_in_range(num, left, right):
    count = 0
    if num < left or num > right:
        while num < left or num > right:
            if num < left:
                num += 12
                count -= 1
            elif num > right:
                num -= 12
                count += 1
    return count


# 使用示例
# convert_midi_to_xml('midi/NewFile.mid')
# convert_midi_to_xml('midi_for_test/onestop.mid')
convert_midi_to_xml('midi_for_test/mutiple.mid')
