import os
import sys
import threading
import time

import mido
from PySide6 import QtCore, QtGui, QtWidgets
from PySide6.QtCore import QPointF, QLineF, QTimer, Qt
from PySide6.QtGui import QGuiApplication, QColor, QPen, QTextCharFormat, QBrush, QTextCursor, QIcon
from PySide6.QtWidgets import QGraphicsRectItem, QGraphicsLineItem
from mido import Message
import mido.backends.rtmidi
from qt_material import apply_stylesheet

import graphic_view
import midiTex
import program_table
import help

kill_flag = []
default_volume = 72
note_mapping = {
    'a': 60 - 3,
    'b': 60 - 1,
    'c': 60,
    'd': 60 + 2,
    'e': 60 + 4,
    'f': 60 + 5,
    'g': 60 + 7,
}
color_set = [[0, 188, 212], [139, 195, 74], [255, 64, 129], [255, 196, 1], [255, 61, 0], [0, 150, 136],
             [0, 229, 255], [224, 64, 251], [0, 150, 136], [255, 23, 68]]
tunes = ['c', 'd', 'e', 'f', 'g', 'a', 'b']
notes = ['c', 'c#', 'd', 'd#', 'e', 'f', 'f#', 'g', 'g#', 'a', 'a#', 'b']
notes_h = {
    'C': 0,
    'C#': 1,
    'D': 2,
    'D#': 3,
    'E': 4,
    'F': 5,
    'F#': 6,
    'G': 7,
    'G#': 8,
    'A': 9,
    'A#': 10,
    'B': 11
}
pitch2note = {
    2: 2, 3: 4, 4: 5, 5: 7, 6: 9, 7: 11, 8: 12, 9: 14, 11: 17, 13: 21
}
program_names = {
    0: 'Acoustic Grand Piano',
    1: 'Bright Acoustic Piano',
    2: 'Electric Grand Piano',
    3: 'Honky-tonk Piano',
    4: 'Electric Piano 1(Rhodes Piano)',
    5: 'Electric Piano 2(Chorused Piano)',
    6: 'Harpsichord',
    7: 'Clavi',
    8: 'Celesta',
    9: 'Glockenspiel',
    10: 'Music box',
    11: 'Vibraphone',
    12: 'Marimba',
    13: 'Xylophone',
    14: 'Tubular Bells',
    15: 'Dulcimer',
    16: 'Drawbar Organ(Hammond Organ)',
    17: 'Percussive Organ',
    18: 'Rock Organ',
    19: 'Church Organ',
    20: 'Reed Organ',
    21: 'Accordion',
    22: 'Harmonica',
    23: 'Tango Accordion',
    24: 'Acoustic Guitar（nylon）',
    25: 'Acoustic Guitar（steel）',
    26: 'Electric Guitar（jazz）',
    27: 'Electric Guitar（clean）',
    28: 'Electric Guitar（muted）',
    29: 'Overdriven Guitar',
    30: 'Distortion Guitar',
    31: 'Guitar harmonics',
    32: 'Acoustic Bass',
    33: 'Electric Bass（finger）',
    34: 'Electric Bass（pick）',
    35: 'Fretless Bass',
    36: 'Slap Bass 1',
    37: 'Slap Bass 2',
    38: 'Synth Bass 1',
    39: 'Synth Bass 2',
    40: 'Violin',
    41: 'Viola',
    42: 'Cello',
    43: 'Contrabass',
    44: 'Tremolo Strings',
    45: 'Pizzicato Strings',
    46: 'Orchestral Harp',
    47: 'Timpani',
    48: 'String Ensemble 1',
    49: 'String Ensemble 2',
    50: 'Synth Strings 1',
    51: 'Synth Strings 2',
    52: 'Choir Aahs',
    53: 'Voice Oohs',
    54: 'Synth Voice',
    55: 'Orchestra Hit',
    56: 'Trumpet',
    57: 'Trombone',
    58: 'Tuba',
    59: 'Muted Trumpet',
    60: 'French Horn',
    61: 'Brass Section',
    62: 'Synth Brass 1',
    63: 'Synth Brass 2',
    64: 'Soprano Sax',
    65: 'Alto Sax',
    66: 'Tenor Sax',
    67: 'Baritone Sax',
    68: 'Oboe',
    69: 'English Horn',
    70: 'Bassoon',
    71: 'Clarinet',
    72: 'Piccolo',
    73: 'Flute',
    74: 'Recorder',
    75: 'Pan Flute',
    76: 'Blown Bottle',
    77: 'Shakuhachi',
    78: 'Whistle',
    79: 'Ocarina',
    80: 'Lead 1（square）',
    81: 'Lead 2（sawtooth）',
    82: 'Lead 3（calliope）',
    83: 'Lead 4（chiff）',
    84: 'Lead 5（charang）',
    85: 'Lead 6（voice）',
    86: 'Lead 7（fifths）',
    87: 'Lead 8（bass + lead）',
    88: 'Pad 1（new age）',
    89: 'Pad 2（warm）',
    90: 'Pad 3（polysynth）',
    91: 'Pad 4（choir）',
    92: 'Pad 5（bowed）',
    93: 'Pad 6（metallic）',
    94: 'Pad 7（halo）',
    95: 'Pad 8（sweep）',
    96: 'FX 1（rain）',
    97: 'FX 2（soundtrack）',
    98: 'FX 3（crystal）',
    99: 'FX 4（atmosphere）',
    100: 'FX 5（light）',
    101: 'FX 6（goblins）',
    102: 'FX 7（echoes）',
    103: 'FX 8（sci-fi）',
    104: 'Sitar',
    105: 'Banjo',
    106: 'Shamisen',
    107: 'Koto',
    108: 'Kalimba',
    109: 'Bagpipe',
    110: 'Fiddle',
    111: 'Shanai',
    112: 'Tinkle Bell',
    113: 'Agogo',
    114: 'Steel Drums',
    115: 'Woodblock',
    116: 'Taiko Drum',
    117: 'Melodic Tom',
    118: 'Synth Drum',
    119: 'Reverse Cymbal',
    120: 'Guitar Fret Noise',
    121: 'Breath Noise',
    122: 'Seashore',
    123: 'Bird Tweet',
    124: 'Telephone',
    125: 'Helicopter',
    126: 'Applause',
    127: 'Gunshot'
}
program_chinese = ["大钢琴（声学钢琴）",
                   "明亮的钢琴",
                   "电钢琴",
                   "酒吧钢琴",
                   "柔和的电钢琴",
                   "加合唱效果的电钢琴",
                   "羽管键琴（拨弦古钢琴）",
                   "科拉维科特琴（击弦古钢琴）",
                   "钢片琴",
                   "钟琴",
                   "八音盒",
                   "颤音琴",
                   "马林巴琴",
                   "木琴",
                   "管钟",
                   "大扬琴",
                   "击杆风琴",
                   "打击式风琴",
                   "摇滚风琴",
                   "教堂风琴",
                   "簧管风琴",
                   "手风琴",
                   "口琴",
                   "探戈手风琴",
                   "尼龙弦吉他",
                   "钢弦吉他",
                   "爵士电吉他",
                   "清音电吉他",
                   "闷音电吉他",
                   "加驱动效果的电吉他",
                   "加失真效果的电吉他",
                   "吉他和音",
                   "大贝司（声学贝司）",
                   "电贝司（指弹）",
                   "电贝司（拨片）",
                   "无品贝司",
                   "掌击贝司",
                   "掌击贝司",
                   "电子合成贝司",
                   "电子合成贝司",
                   "小提琴",
                   "中提琴",
                   "大提琴",
                   "低音大提琴",
                   "弦乐群颤音",
                   "弦乐群拨弦",
                   "竖琴",
                   "定音鼓",
                   "弦乐合奏",
                   "弦乐合奏",
                   "合成弦乐合奏",
                   "合成弦乐合奏",
                   "人声合唱'啊'",
                   "人声'嘟'",
                   "合成人声",
                   "管弦乐敲击齐奏",
                   "小号",
                   "长号",
                   "大号",
                   "加弱音器小号",
                   "法国号（圆号）",
                   "铜管组（铜管乐器合奏音色）",
                   "合成铜管音色",
                   "合成铜管音色",
                   "高音萨克斯风",
                   "次中音萨克斯风",
                   "中音萨克斯风",
                   "低音萨克斯风",
                   "双簧管",
                   "英国管",
                   "巴松（大管）",
                   "单簧管（黑管）",
                   "短笛",
                   "长笛",
                   "竖笛",
                   "排箫",
                   "芦笛",
                   "日本尺八",
                   "口哨声",
                   "奥卡雷那",
                   "合成主音（方波）",
                   "合成主音（锯齿波）",
                   "合成主音",
                   "合成主音",
                   "合成主音",
                   "合成主音（人声）",
                   "合成主音（平行五度）",
                   "合成主音（贝司加主音）",
                   "合成音色（新世纪）",
                   "合成音色（温暖）",
                   "合成音色",
                   "合成音色（合唱）",
                   "合成音色",
                   "合成音色（金属声）",
                   "合成音色（光环）",
                   "合成音色",
                   "合成效果雨声",
                   "合成效果音轨",
                   "合成效果水晶",
                   "合成效果大气",
                   "合成效果明亮",
                   "合成效果鬼怪",
                   "合成效果回声",
                   "合成效果科幻",
                   "西塔尔（印度）",
                   "班卓琴（美洲）",
                   "三昧线（日本）",
                   "十三弦筝（日本）",
                   "卡林巴",
                   "风笛",
                   "民族提琴",
                   "山奈",
                   "叮当铃",
                   "Agogo",
                   "钢鼓",
                   "木鱼",
                   "太鼓",
                   "通通鼓",
                   "合成鼓",
                   "铜钹",
                   "吉他换把杂音",
                   "呼吸声",
                   "海浪声",
                   "鸟鸣",
                   "电话铃",
                   "直升机",
                   "鼓掌声",
                   "枪声"]
program_class = ['钢琴类', '色彩打击乐器类', '风琴类', '吉他类', '贝斯类', '弦乐类', '合奏/合唱类', '铜管类', '簧管类',
                 '笛类', '合成主音类', '合成音色类', '合成效果类', '民间乐器类', '打击乐器类', '声音效果类']


def is_list_of_int(arr):
    if type(arr) == list:
        return all(isinstance(i, int) for i in arr)
    else:
        return False


def fit_in_range(num, start, end):
    # Check if the number is within the range and fit it by mod
    if num < start or num > end:
        # If not, add or subtract 12 until it is
        while num < start or num > end:
            if num < start:
                num += 12
            elif num > end:
                num -= 12

    return num


def add_node(to_track, note, velocity=72, offset=0, times=480):
    """添加单个音符，note以60形式表示"""
    to_track.append(Message('note_on', note=note, velocity=velocity, time=offset))
    to_track.append(Message('note_off', note=note, velocity=velocity, time=offset + times))
    return


def get_chord_set(chord, transposition, descend=False):
    """解析字符串形式表示的和弦为note数组"""
    chord_set = []
    chord_subset = []
    duration_set = []
    velocity_set = []
    duration = ''
    duration_next = None
    velocity = ''
    velocity_next = None
    chord_mode = False
    duration_mode = False
    velocity_mode = False
    unison = False
    new_mode = False
    delay_mode = False
    for c in chord:
        if c == '$':
            new_mode = True
            continue
        if c == '*':
            if len(chord_set) > 0:
                if type(chord_set[-1]) == int:
                    chord_set.append(chord_set[-1])
                else:
                    chord_set.append(chord_set[-1][-1])
            else:
                chord_set.append(55 + transposition)
            duration_set.append(duration_next)
            duration_next = None
            velocity_set.append(0)
            continue
        if c == '-':
            unison = True
            continue
        if c == '{':
            chord_mode = True
            chord_subset = []
            continue
        if c == '}':
            if len(chord_set) > 0 and not new_mode:
                if type(chord_set[-1]) == int:
                    refer = chord_set[-1]
                else:
                    refer = chord_set[-1][-1]
                if unison:
                    fix = fit_in_range(chord_subset[-1], refer - 6, refer + 6) - chord_subset[-1]
                    unison = False
                elif descend:
                    fix = fit_in_range(chord_subset[-1], refer - 12, refer - 1) - chord_subset[-1]
                else:
                    fix = fit_in_range(chord_subset[-1], refer + 1, refer + 12) - chord_subset[-1]
                chord_subset = [i + fix for i in chord_subset]
            if new_mode:
                new_mode = False
            chord_set.append(chord_subset)
            duration_set.append(duration_next)
            velocity_set.append(velocity_next)
            duration_next = None
            velocity_next = None
            chord_mode = False
            continue
        if c == '[':
            duration_mode = True
            duration = ''
            continue
        if c == ']':
            duration_mode = False
            duration_next = float(duration)
            continue
        if duration_mode:
            duration = duration + c
            continue
        if c == '(':
            velocity_mode = True
            velocity = ''
            continue
        if c == ')':
            velocity_mode = False
            velocity_next = int(velocity)
            continue
        if velocity_mode:
            velocity = velocity + c
            continue
        if chord_mode:
            if 96 < ord(c) < 104:
                chord_subset.append(note_mapping[c] + transposition)
            elif c == '#':
                chord_subset[-1] = chord_subset[-1] + 1
            elif c == '^':
                chord_subset[-1] = chord_subset[-1] - 1
            if c != ' ' and len(chord_subset) > 1:
                chord_subset[-1] = fit_in_range(chord_subset[-1], chord_subset[-2] + 1, chord_subset[-2] + 12)
            continue
        if 96 < ord(c) < 104:
            chord_set.append(note_mapping[c] + transposition)
            duration_set.append(duration_next)
            velocity_set.append(velocity_next)
            duration_next = None
            velocity_next = None
        elif c == '#':
            chord_set[-1] = chord_set[-1] + 1
        elif c == '^':
            chord_set[-1] = chord_set[-1] - 1
        elif c == '<':
            chord_set.append(['delay_on'])
            duration_set.append(0)
            velocity_set.append(0)
            delay_mode = True
        elif c == '>':
            chord_set.append(['delay_off'])
            duration_set.append(0)
            velocity_set.append(0)
            delay_mode = True

        if c != ' ' and len(chord_set) > 1 and not new_mode and not delay_mode:
            if type(chord_set[-2]) == int:
                refer = chord_set[-2]
            else:
                refer = chord_set[-2][-1]
            if unison:
                chord_set[-1] = fit_in_range(chord_set[-1], refer - 6, refer + 6)
                unison = False
            elif descend:
                chord_set[-1] = fit_in_range(chord_set[-1], refer - 12, refer - 1)
            else:
                chord_set[-1] = fit_in_range(chord_set[-1], refer + 1, refer + 12)

        if delay_mode:
            if new_mode or len(chord_set) < 2:
                chord_set[-1].append(55 + transposition)
            else:
                if type(chord_set[-2]) == int:
                    refer = chord_set[-2]
                else:
                    refer = chord_set[-2][-1]
                chord_set[-1].append(refer)
            delay_mode = False

        if new_mode:
            new_mode = False
    return [chord_set, duration_set, velocity_set]


def add_chord_set(to_track, chord_set, velocity=72, offset=0, times=480, arpeggio_time=0, to_channel=0):
    """添加用note数组表示的和弦组，支持琶音模式"""
    to_track.append(Message('note_on', note=chord_set[0], velocity=velocity, time=offset, channel=to_channel))
    for note in chord_set[1:]:
        to_track.append(Message('note_on', note=note, velocity=velocity, time=arpeggio_time, channel=to_channel))
    for note in chord_set:
        if to_track[-1].type == 'note_off':
            to_track.append(Message('note_off', note=note, velocity=velocity, time=0, channel=to_channel))
        else:
            to_track.append(
                Message('note_off', note=note, velocity=velocity, time=times - (len(chord_set) - 1) * arpeggio_time,
                        channel=to_channel))
    return


# def add_chord(to_track, chord, velocity=96, offset=0, time=480, arpeggio=0, transposition=0):
#     """添加和弦"""
#     chord_set = get_chord_set(chord, transposition)
#     add_chord_set(to_track, chord_set, velocity, offset, time, arpeggio)


def add_seq(to_track, chord, velocity=72, offset=0, times=120, transposition=0, descend=False, last_note=None,
            arpeggio_time=0, to_channel=0):
    """添加单一升降序列，支持和弦及琶音"""
    if chord == '':
        return
    seq_set = get_chord_set(chord, transposition, descend)
    chord_set = seq_set[0]
    duration_set = seq_set[1]
    velocity_set = seq_set[2]
    times_set = []
    for i in range(0, len(duration_set)):
        if duration_set[i] is None:
            times_set.append(times)
        else:
            times_set.append(int(duration_set[i] * 480))
        if velocity_set[i] is None:
            velocity_set[i] = velocity

    # 通过移动处理和弦转折情形的衔接
    if last_note is not None and chord[0] != '$':
        # 计算修正值
        n = 0
        while type(chord_set[n]) != int and not is_list_of_int(chord_set[n]):
            n += 1
        if type(chord_set[n]) == int:
            if descend:
                fix = fit_in_range(chord_set[n], last_note - 12, last_note - 1) - chord_set[n]
            else:
                fix = fit_in_range(chord_set[n], last_note + 1, last_note + 12) - chord_set[n]
        else:
            if descend:
                fix = fit_in_range(chord_set[n][-1], last_note - 12, last_note - 1) - chord_set[n][-1]
            else:
                fix = fit_in_range(chord_set[n][-1], last_note + 1, last_note + 12) - chord_set[n][-1]
        # 进行修正
        for i, chord in enumerate(chord_set):
            if type(chord_set[i]) == int:
                chord_set[i] = chord + fix
            elif is_list_of_int(chord_set[i]):
                chord_set[i] = [j + fix for j in chord_set[i]]

    if type(chord_set[0]) == int:
        to_track.append(
            Message('note_on', note=chord_set[0], velocity=velocity_set[0], time=offset, channel=to_channel))
        to_track.append(
            Message('note_off', note=chord_set[0], velocity=velocity_set[0], time=times_set[0], channel=to_channel))
    elif is_list_of_int(chord_set[0]):
        add_chord_set(to_track, chord_set[0], velocity_set[0], offset, times_set[0], arpeggio_time, to_channel)
    elif chord_set[0][0] == 'delay_on':
        to_track.append(Message('control_change', channel=to_channel, control=64, value=127))
    elif chord_set[0][0] == 'delay_off':
        to_track.append(Message('control_change', channel=to_channel, control=64, value=0))
    for i in range(1, len(chord_set)):
        if type(chord_set[i]) == int:
            to_track.append(Message('note_on', note=chord_set[i], velocity=velocity_set[i], time=0, channel=to_channel))
            to_track.append(
                Message('note_off', note=chord_set[i], velocity=velocity_set[i], time=times_set[i], channel=to_channel))
        elif is_list_of_int(chord_set[i]):
            add_chord_set(to_track, chord_set[i], velocity_set[i], 0, times_set[i], arpeggio_time, to_channel)
        elif chord_set[i][0] == 'delay_on':
            to_track.append(Message('control_change', channel=to_channel, control=64, value=127))
        elif chord_set[i][0] == 'delay_off':
            to_track.append(Message('control_change', channel=to_channel, control=64, value=0))
    n = -1
    while type(chord_set[n]) != int and not is_list_of_int(chord_set[n]):
        n -= 1
    if type(chord_set[-1]) == int:
        return chord_set[-1]
    elif is_list_of_int(chord_set[-1]):
        return chord_set[-1][-1]


def add(to_mid, track_num, notes_name, velocity=default_volume, offset=0, duration=0.5, transposition=0,
        arpeggio_time=0):
    """添加通用音乐记号，包括和弦和琶音"""
    to_track = to_mid.tracks[track_num]
    times = int(480 * duration)
    chords = notes_name.split(';')
    last_note = add_seq(to_track, chords[0], velocity, offset, times, transposition, arpeggio_time=arpeggio_time,
                        to_channel=track_num)
    if chords[0] == '':
        next_offset = offset
    else:
        next_offset = 0
    flag = 1
    for i, chord in enumerate(chords[1:]):
        if flag == 0:
            last_note = add_seq(to_track, chord, velocity, next_offset, times, transposition, last_note=last_note,
                                arpeggio_time=arpeggio_time, to_channel=track_num)
            flag = 1
        else:
            last_note = add_seq(to_track, chord, velocity, next_offset, times, transposition, True, last_note=last_note,
                                arpeggio_time=arpeggio_time, to_channel=track_num)
            flag = 0
        if chord != '':
            next_offset = 0


def set_track(to_midi, program=0, name=None, bmp=120, offset=0):
    """向文件中添加一个音轨"""
    tempo = 60000000 // bmp
    if name is None or name == '':
        name = program_names[program]

    new_track = mido.MidiTrack()
    new_track.append(mido.MetaMessage('track_name', name=name, time=0))
    new_track.append(mido.MetaMessage('set_tempo', tempo=tempo, time=0))
    new_track.append(Message('program_change', channel=len(to_midi.tracks), program=program, time=offset))
    to_midi.tracks.append(new_track)


def get_choir(choir_string):
    """解析和弦术语"""
    add_point = choir_string.find("add")
    on_point = choir_string.find("on")
    if add_point == -1 and on_point == -1:
        add_note = None
        on_note = None
        name = choir_string
    else:
        if add_point == -1:
            name = choir_string[:on_point]
            add_note = None
            on_note = choir_string[on_point + 2:]
        elif on_point == -1:
            name = choir_string[:add_point]
            on_note = None
            add_note = choir_string[add_point + 3:]
        else:
            if add_point < on_point:
                name = choir_string[:add_point]
                add_note = choir_string[add_point + 3:on_point]
                on_note = choir_string[on_point + 2:]
            else:
                name = choir_string[:on_point]
                add_note = choir_string[add_point + 3:]
                on_note = choir_string[on_point + 2:add_point]
    name = name.replace(' ', '')
    if on_note is not None:
        on_note = on_note.replace(' ', '')
    if add_note is not None:
        add_note = add_note.replace(' ', '').split(',')

    if len(name) == 1:
        root = notes_h[name]
        choir_type = 'maj'
    elif name[-1] == '#':
        root = notes_h[name[0]] + 1
        choir_type = 'maj'
    elif name[-1] == 'b':
        root = notes_h[name[0]] - 1
        choir_type = 'maj'
    else:
        if name[1] == '#':
            root = notes_h[name[0]] + 1
        elif name[1] == 'b':
            root = notes_h[name[0]] - 1
        else:
            root = notes_h[name[0]]
        if name[-3:] == 'min' or name[-3:] == 'dim' or name[-3:] == 'aug' or name[-3:] == 'mM7':
            choir_type = name[-3:]
        elif name[-4:] == 'sus2' or name[-4:] == 'sus4' or name[-4:] == 'maj7' or name[-4:] == 'min7':
            choir_type = name[-4:]
        elif name[-1] == '7' or name[-1] == '8':
            choir_type = name[-1]
        else:
            choir_type = None

    if choir_type == 'maj':
        choir_set = [root, root + 4, root + 7]
    elif choir_type == 'min':
        choir_set = [root, root + 3, root + 7]
    elif choir_type == 'dim':
        choir_set = [root, root + 3, root + 6]
    elif choir_type == 'aug':
        choir_set = [root, root + 4, root + 8]
    elif choir_type == 'sus2':
        choir_set = [root, root + 3, root + 7]
    elif choir_type == 'sus4':
        choir_set = [root, root + 5, root + 7]
    elif choir_type == '7':
        choir_set = [root, root + 4, root + 7, root + 10]
    elif choir_type == 'maj7':
        choir_set = [root, root + 4, root + 7, root + 11]
    elif choir_type == 'min7':
        choir_set = [root, root + 3, root + 7, root + 10]
    elif choir_type == 'mM7':
        choir_set = [root, root + 3, root + 7, root + 11]
    elif choir_type == '8':
        choir_set = [root, root + 12]
    else:
        choir_set = [root]
    if add_note is not None:
        for note in add_note:
            buff = 0
            while note[0] == '#':
                buff = buff + 1
                note = note[1:]
            while note[0] == 'b':
                buff = buff - 1
                note = note[1:]
            choir_set.append(pitch2note[int(note)] + buff + root)
    choir_set.sort()
    note_string = ''
    for note in choir_set:
        note_string = note_string + notes[note % 12] + ' '
    if on_note is not None:
        start_point = note_string.find(on_note.lower())
        return note_string[start_point:] + note_string[:start_point]
    else:
        return note_string


def choir(choir_string, duration=4):
    """使用和弦术语生成对应的midiTex，支持序列输入，用;分隔"""
    choir_string_set = choir_string.split(';')
    note_string = ''
    for string in choir_string_set:
        note_string = note_string + '[' + str(duration) + ']' + '{' + get_choir(string) + '}-'
    note_string = note_string
    return note_string


def arpeggio(root_string, note_num=8, total_duration=4.0):
    """使用和弦术语生成对应的琶音伴奏midiTex，支持序列输入，用;分隔"""
    arpeggio_string = ';'
    if note_num % 2 == 0:
        duration = str(total_duration / note_num)
    else:
        duration = str(total_duration / note_num)
    duration = '[' + duration + ']'
    roots = root_string.split(';')
    for root in roots:
        note_set = get_choir(root)[:-1].split(' ')
        arpeggio_string = arpeggio_string + duration + note_set[0] + ';' + duration + note_set[2]
        if note_num % 2 == 0:
            i = 0
            for i in range(3, note_num // 2 + 2):
                arpeggio_string = arpeggio_string + duration + note_set[i % len(note_set)]
            last_i = i
            arpeggio_string = arpeggio_string + ';'
            for i in range(note_num // 2 + 2, note_num + 1):
                last_i = last_i - 1
                arpeggio_string = arpeggio_string + duration + note_set[last_i % len(note_set)]
        else:
            i = 3
            for i in range(3, (note_num + 1) // 2 + 2):
                arpeggio_string = arpeggio_string + duration + note_set[i % len(note_set)]
            last_i = i
            arpeggio_string = arpeggio_string + ';'
            for i in range((note_num + 1) // 2 + 2, note_num + 1):
                last_i = last_i - 1
                arpeggio_string = arpeggio_string + duration + note_set[last_i % len(note_set)]
            arpeggio_string = arpeggio_string + '(0)[0]' + note_set[(last_i - 1) % len(note_set)]
    return arpeggio_string


class HelpWindow(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        ui = help.Ui_Form()
        ui.setupUi(self)


class ProgramWindow(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.ui = program_table.Ui_Form()
        self.ui.setupUi(self)
        self.model = QtGui.QStandardItemModel(64 + 8, 6)
        self.ui.tableView.setModel(self.model)
        self.ui.tableView.setColumnWidth(0, 40)
        self.ui.tableView.setColumnWidth(1, 160)
        self.ui.tableView.setColumnWidth(2, 160)
        self.ui.tableView.setColumnWidth(3, 40)
        self.ui.tableView.setColumnWidth(4, 160)
        self.ui.tableView.setColumnWidth(5, 160)
        x = 0
        y = 0
        class_num = 0
        self.pos2program = {}
        for i in range(128):
            if i % 16 == 0:
                x = 0
            elif i % 8 == 0:
                x = 3
                y = y - 9
            if i % 8 == 0:
                self.ui.tableView.setSpan(y, x, 1, 3)
                new_item = QtGui.QStandardItem(program_class[class_num])
                new_item.setTextAlignment(QtCore.Qt.AlignHCenter | QtCore.Qt.AlignVCenter)
                self.model.setItem(y, x, new_item)
                class_num = class_num + 1
                y = y + 1
            self.model.setItem(y, x, QtGui.QStandardItem(str(i)))
            self.model.setItem(y, x + 1, QtGui.QStandardItem(program_names[i]))
            self.model.setItem(y, x + 2, QtGui.QStandardItem(program_chinese[i]))
            self.pos2program[y * 6 + x] = i
            self.pos2program[y * 6 + x + 1] = i
            self.pos2program[y * 6 + x + 2] = i
            y = y + 1


class GraphicWindow(QtWidgets.QWidget):
    def __init__(self, tracks, bmp=None):
        super().__init__()
        self.ui = graphic_view.Ui_Form()
        self.ui.setupUi(self)
        self.scene = QtWidgets.QGraphicsScene()
        self.ui.graphicsView.setScene(self.scene)
        self.scene.setBackgroundBrush(QColor(48, 48, 48))
        self.play_line = QGraphicsRectItem(0, 0, 3, 15 * 131)
        self.rect_list = []
        self.rect_color = []
        # 纵向0为中央c的上侧 x=15*(note-60) y=time*0.15 一拍=72
        self.pen_inactive = QPen(QColor(170, 170, 170), 0.001)
        self.pen_active = QPen(QColor(255, 255, 255), 1)
        delay_on = False
        max_time = 0
        for k, track in enumerate(tracks):
            track_color = QColor(color_set[k % 10][0], color_set[k % 10][1], color_set[k % 10][2])
            time = 0
            note_box = []
            time_box = []
            for message in track:
                if message.type == 'note_on':
                    time = time + message.time
                    if message.velocity == 0:
                        continue
                    note_box.append(message)
                    time_box.append(time)
                elif message.type == 'note_off':
                    time = time + message.time
                    if not delay_on:
                        note = message.note
                        if message.velocity == 0:
                            continue
                        for i, on_message in enumerate(note_box):
                            if on_message.note == note:
                                duration = time - time_box[i]
                                self.rect_list.append(
                                    QGraphicsRectItem((time - duration) * 0.15 + 0.5, -15 * (note - 60) + 1,
                                                      duration * 0.15 - 1,
                                                      13))
                                self.rect_list[-1].setBrush(track_color)
                                self.rect_color.append(track_color)
                                note_box.pop(i)
                                time_box.pop(i)
                elif message.type == 'program_change':
                    time = time + message.time
                elif message.type == 'control_change':
                    if message.control == 64:
                        if message.value >= 64:
                            delay_on = True
                        else:
                            # delay off
                            time = time + message.time
                            for i, on_message in enumerate(note_box):
                                duration = time - time_box[i]
                                self.rect_list.append(
                                    QGraphicsRectItem((time - duration) * 0.15 + 0.5, -15 * (note_box[i].note - 60) + 1,
                                                      duration * 0.15 - 1,
                                                      13))
                                self.rect_list[-1].setBrush(track_color)
                                self.rect_color.append(track_color)
                            note_box = []
                            time_box = []
                            delay_on = False
            max_time = max(max_time, time)

        line_set = []
        for line in range(0, 128, 12):
            # C
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 60) + 7.5, max_time * 0.15, 15 * (line - 60) + 7.5))
            if line == 60:
                line_set[-1].setPen(QPen(QColor(99, 111, 118), 15))
            else:
                line_set[-1].setPen(QPen(QColor(79, 91, 98), 15))
            self.scene.addItem(line_set[-1])

            normal_color = QColor(54, 57, 60)
            # B
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 59) + 7.5, max_time * 0.15, 15 * (line - 59) + 7.5))

            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
            # A
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 57) + 7.5, max_time * 0.15, 15 * (line - 57) + 7.5))
            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
            # G
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 55) + 7.5, max_time * 0.15, 15 * (line - 55) + 7.5))
            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
            # F
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 53) + 7.5, max_time * 0.15, 15 * (line - 53) + 7.5))
            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
            # E
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 52) + 7.5, max_time * 0.15, 15 * (line - 52) + 7.5))
            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
            # D
            line_set.append(QGraphicsLineItem())
            line_set[-1].setLine(QLineF(0, 15 * (line - 50) + 7.5, max_time * 0.15, 15 * (line - 50) + 7.5))
            line_set[-1].setPen(QPen(normal_color, 15))
            self.scene.addItem(line_set[-1])
        for item in self.rect_list:
            self.scene.addItem(item)

        self.play_line.setBrush(QColor(255, 255, 255))
        self.play_line.setPen(QPen(QColor(150, 150, 150), 1))
        self.scene.addItem(self.play_line)
        self.play_line.setPos(0, -60 * 15)
        self.timer = QTimer()
        self.speed = bmp * 1.2
        self.timer.setInterval(10)
        self.iterations = int(max_time / 480 / bmp * 60 * 1000 / self.timer.interval())
        self.timer.timeout.connect(self.move_rectangle)
        self.timer.start(10)

    def move_rectangle(self):
        if self.iterations > 0:
            self.play_line.moveBy(self.speed * self.timer.interval() / 1000, 0)
            self.iterations -= 1
            rect_pos = self.play_line.pos()
            rect_pos += QPointF(0, 60 * 15)
            # Center the view on the rect item's position
            self.ui.graphicsView.centerOn(rect_pos)
            for i, rect in enumerate(self.rect_list):
                if rect.rect().topLeft().x() < rect_pos.x() < rect.rect().topLeft().x() + rect.rect().width():
                    # If there is an intersection, set the brush color of the rect item to red
                    rect.setBrush(self.rect_color[i].lighter(150))
                    rect.setPen(self.pen_active)
                else:
                    # If there is no intersection, set the brush color of the rect item back to its original color
                    rect.setBrush(self.rect_color[i])
                    rect.setPen(self.pen_inactive)
        else:
            self.timer.stop()


def play_music(port, mid, thread_num):
    resent_notes = [60, 62, 64, 65]
    for j, msg in enumerate(mid.play()):
        global kill_flag
        if kill_flag[thread_num]:
            exit()
        port.send(msg)
        if msg.type == 'note_on':
            resent_notes[j % 4] = msg.note


class MainWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super().__init__()
        self.channel_num = 0
        self.graphic_view = None
        self.program_window = None
        self.Ui = midiTex.Ui_MainWindow()
        self.Ui.setupUi(self)
        self.port = mido.open_output(mido.get_output_names()[0])
        self.show_result = True
        self.colorful_text = True

        self.run_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+S"), self)
        self.run_shortcut.setAutoRepeat(False)
        self.run_shortcut.activated.connect(self.save_and_play)

        self.save_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+Shift+S"), self)
        self.save_shortcut.setAutoRepeat(False)
        self.save_shortcut.activated.connect(self.save_file)

        self.open_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+O"), self)
        self.open_shortcut.setAutoRepeat(False)
        self.open_shortcut.activated.connect(self.open_file)

        self.program_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+P"), self)
        self.program_shortcut.setAutoRepeat(False)
        self.program_shortcut.activated.connect(self.open_program_list)

        self.help_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+G"), self)
        self.help_shortcut.setAutoRepeat(False)
        self.help_shortcut.activated.connect(self.open_help)

        self.result_shortcut = QtGui.QShortcut(QtGui.QKeySequence("Ctrl+R"), self)
        self.result_shortcut.setAutoRepeat(False)
        self.result_shortcut.activated.connect(self.shortcut_show_result)

        self.Ui.actionprogram_list.triggered.connect(self.open_program_list)
        self.Ui.actionsave.triggered.connect(self.save_file)
        self.Ui.actionopen.triggered.connect(self.open_file)
        self.Ui.actionnew.triggered.connect(self.new_file)
        self.Ui.actionrun.triggered.connect(self.save_and_play)
        self.Ui.actionPrograma_Rule_Ctrl_R.triggered.connect(self.open_help)
        self.Ui.actionresult.triggered.connect(self.set_show_result)
        self.Ui.note_browser.keyReleaseEvent = self.text_brush
        self.Ui.track_browser.keyReleaseEvent = self.track_brush
        self.Ui.actioncolor.triggered.connect(self.set_colorful_text)
        self.note_browser_key_press_event = self.Ui.note_browser.keyPressEvent
        self.Ui.note_browser.keyPressEvent = self.complete_bracket

        self.Screen = QGuiApplication.primaryScreen().geometry()
        self.thread_list = []
        self.track_name = []
        self.def_list = []

        # 设置字符格式
        self.defaultFormat = QTextCharFormat()
        self.defaultFormat.setForeground(QBrush(QColor(200, 200, 220)))

        self.numberFormat = QTextCharFormat()
        self.numberFormat.setForeground(QBrush(QColor(67, 121, 186)))

        self.symbolFormat = QTextCharFormat()
        self.symbolFormat.setForeground(QBrush(QColor(128, 128, 138)))

        # 大括号
        self.bracketFormat1 = QTextCharFormat()
        self.bracketFormat1.setForeground(QBrush(QColor(158, 108, 108)))

        # 圆括号
        self.bracketFormat3 = QTextCharFormat()
        self.bracketFormat3.setForeground(QBrush(QColor(118, 118, 168)))

        self.ch_format = QTextCharFormat()
        self.ch_format.setForeground(QBrush(QColor(255, 153, 51)))

        self.ar_format = QTextCharFormat()
        self.ar_format.setForeground(QBrush(QColor(82, 164, 0)))

        self.track_format = []
        for color in color_set:
            color_format = QTextCharFormat()
            color_format.setForeground(QBrush(QColor(color[0], color[1], color[2])))
            self.track_format.append(color_format)

        self.def_format = QTextCharFormat()
        self.def_format.setForeground(QBrush(QColor(148, 108, 255)))

        self.track_brush(0)
        self.show()

    def complete_bracket(self, event):
        cursor = self.Ui.note_browser.textCursor()

        if event.key() == Qt.Key_BraceLeft:
            if cursor.selectedText() == '':
                self.Ui.note_browser.insertPlainText("{}")
                self.Ui.note_browser.moveCursor(QTextCursor.Left)
            else:
                length = len(cursor.selectedText())
                self.Ui.note_browser.insertPlainText("{" + cursor.selectedText() + "}")
                for i in range(length + 1):
                    self.Ui.note_browser.moveCursor(QTextCursor.Left)
        elif event.key() == Qt.Key_Less:
            if cursor.selectedText() == '':
                self.Ui.note_browser.insertPlainText("<>")
                self.Ui.note_browser.moveCursor(QTextCursor.Left)
            else:
                self.Ui.note_browser.insertPlainText("<" + cursor.selectedText() + ">")
        elif event.key() == Qt.Key_BracketLeft:
            self.Ui.note_browser.insertPlainText("[]")
            self.Ui.note_browser.moveCursor(QTextCursor.Left)
        elif event.key() == Qt.Key_ParenLeft:
            self.Ui.note_browser.insertPlainText("()")
            self.Ui.note_browser.moveCursor(QTextCursor.Left)
        elif event.key() == Qt.Key_Backspace and cursor.selectedText() == '':
            cursor.setPosition(cursor.position() - 1)
            cursor.movePosition(QTextCursor.NextCharacter, QTextCursor.KeepAnchor, 2)
            if cursor.selectedText() == "{}" or cursor.selectedText() == "()" or cursor.selectedText() == '[]' or cursor.selectedText() == '<>':
                cursor.removeSelectedText()
            else:
                self.note_browser_key_press_event(event)
        elif event.key() == Qt.Key_BraceRight:
            cursor.movePosition(QTextCursor.NextCharacter, QTextCursor.KeepAnchor, 1)
            if cursor.selectedText() == '}':
                cursor.clearSelection()
                self.Ui.note_browser.moveCursor(QTextCursor.Right)
            else:
                self.Ui.note_browser.insertPlainText("}")
        elif event.key() == Qt.Key_Greater:
            cursor.movePosition(QTextCursor.NextCharacter, QTextCursor.KeepAnchor, 1)
            if cursor.selectedText() == '>':
                cursor.clearSelection()
                self.Ui.note_browser.moveCursor(QTextCursor.Right)
            else:
                self.Ui.note_browser.insertPlainText(">")
        elif event.key() == Qt.Key_ParenRight:
            cursor.movePosition(QTextCursor.NextCharacter, QTextCursor.KeepAnchor, 1)
            if cursor.selectedText() == ')':
                cursor.clearSelection()
                self.Ui.note_browser.moveCursor(QTextCursor.Right)
            else:
                self.Ui.note_browser.insertPlainText(")")
        elif event.key() == Qt.Key_BracketRight:
            cursor.movePosition(QTextCursor.NextCharacter, QTextCursor.KeepAnchor, 1)
            if cursor.selectedText() == ']':
                cursor.clearSelection()
                self.Ui.note_browser.moveCursor(QTextCursor.Right)
            else:
                self.Ui.note_browser.insertPlainText("]")
        else:
            self.note_browser_key_press_event(event)

    def set_style(self):
        self.Ui.midi_browser.setStyleSheet("color: rgb(150,150,150); font-size: 11pt; font-family: Cascadia Code;")
        self.Ui.track_browser.setStyleSheet("color: rgb(150,150,150); font-size: 11pt; font-family: Cascadia Code;")
        self.Ui.note_browser.setStyleSheet("font-size: 11pt; font-family: Cascadia Code;")

    def track_brush(self, event):
        track_doc = self.Ui.track_browser.document()
        track_text = self.Ui.track_browser.toPlainText()
        track_line = track_text.replace(' ', '').replace('\t', '').split('\n')
        self.def_list = []
        self.track_name = []

        for line in track_line:
            name = line.split(':')[0]
            if name == 'def':
                if len(line.split(':')) == 2:
                    def_text = line.split(':')[1].split(',')
                    for text in def_text:
                        if len(text.split('=')) == 2:
                            self.def_list.append(text.split('='))
            else:
                self.track_name.append(name + ':')

        cursor = self.Ui.track_browser.textCursor()
        cursor.select(QTextCursor.Document)
        cursor.mergeCharFormat(self.symbolFormat)

        for i in range(track_doc.characterCount()):
            cursor.setPosition(i)
            for track, name in enumerate(self.track_name):
                cursor.setPosition(i + len(name), QTextCursor.KeepAnchor)
                if cursor.selectedText() == name:
                    cursor.mergeCharFormat(self.track_format[track % 10])
            for defines in self.def_list:
                cursor.setPosition(i + len(defines[0]), QTextCursor.KeepAnchor)
                if cursor.selectedText() == defines[0]:
                    cursor.mergeCharFormat(self.def_format)
        self.text_brush(0)

    def text_brush(self, event):
        if self.colorful_text:
            # 获取文档中所有的数字字符并设置字符格式
            doc = self.Ui.note_browser.document()

            cursor = self.Ui.note_browser.textCursor()
            cursor.select(QTextCursor.Document)
            cursor.mergeCharFormat(self.defaultFormat)

            cursor = QTextCursor(doc)
            for i in range(doc.characterCount()):
                char = doc.characterAt(i)
                cursor.setPosition(i)
                cursor.setPosition(i + 1, QTextCursor.KeepAnchor)
                if char.isalpha():
                    continue
                elif char.isdigit() or char == '[' or char == ']' or char == '.':
                    cursor.setCharFormat(self.numberFormat)
                    continue
                elif char == ';' or char == '-' or char == '$' or char == '=' or char == '*' or char == '<' or char == '>':
                    cursor.setCharFormat(self.symbolFormat)
                    continue
                elif char == '{' or char == '}':
                    cursor.setCharFormat(self.bracketFormat1)
                    continue
                elif char == '(' or char == ')':
                    cursor.setCharFormat(self.bracketFormat3)
                    continue

            for i in range(doc.characterCount()):
                cursor.setPosition(i)
                cursor.setPosition(i + 2, QTextCursor.KeepAnchor)
                text = cursor.selectedText()
                if text == 'ch':
                    cursor.mergeCharFormat(self.ch_format)
                    continue
                elif text == 'ar':
                    cursor.setPosition(i + 3, QTextCursor.KeepAnchor)
                    cursor.mergeCharFormat(self.ar_format)
                    continue
                elif text == 'on':
                    cursor.setPosition(i + 3, QTextCursor.KeepAnchor)
                    cursor.mergeCharFormat(self.symbolFormat)
                    continue

                cursor.setPosition(i + 3, QTextCursor.KeepAnchor)
                text = cursor.selectedText()
                if text == 'add':
                    cursor.setPosition(i + 4, QTextCursor.KeepAnchor)
                    cursor.mergeCharFormat(self.symbolFormat)
                    continue

                for track, name in enumerate(self.track_name):
                    cursor.setPosition(i + len(name), QTextCursor.KeepAnchor)
                    if cursor.selectedText() == name:
                        cursor.mergeCharFormat(self.track_format[track % 10])
                        continue
                for defines in self.def_list:
                    cursor.setPosition(i + len(defines[0]), QTextCursor.KeepAnchor)
                    if cursor.selectedText() == defines[0]:
                        cursor.mergeCharFormat(self.def_format)
                        continue
        else:
            pass
            # cursor = self.Ui.note_browser.textCursor()
            # cursor.select(QTextCursor.Document)
            # cursor.mergeCharFormat(self.defaultFormat)
            #
            # cursor = self.Ui.track_browser.textCursor()
            # cursor.select(QTextCursor.Document)
            # cursor.mergeCharFormat(self.symbolFormat)

    def closeEvent(self, event):
        for i in range(self.channel_num):
            self.port.send(Message('control_change', channel=i, control=123, value=0))
        global kill_flag
        kill_flag = [True for i in range(len(kill_flag))]
        sys.exit(0)

    def shortcut_show_result(self):
        if self.show_result:
            self.Ui.actionresult.setChecked(False)
        else:
            self.Ui.actionresult.setChecked(True)
        self.show_result = self.Ui.actionresult.isChecked()

    def set_show_result(self):
        self.show_result = self.Ui.actionresult.isChecked()

    def set_colorful_text(self):
        self.colorful_text = self.Ui.actioncolor.isChecked()
        if self.colorful_text:
            self.Ui.note_browser.setUndoRedoEnabled(False)
        else:
            self.Ui.note_browser.setUndoRedoEnabled(True)
        self.track_brush(0)

    def open_help(self):
        self.program_window = HelpWindow()
        self.program_window.show()

    def save_and_play(self):
        # create a MIDI file object
        mid = mido.MidiFile()
        midi_text = self.Ui.midi_browser.text()
        track_text = self.Ui.track_browser.toPlainText()

        select_start = self.Ui.note_browser.textCursor().selectionStart()
        select_end = self.Ui.note_browser.textCursor().selectionEnd()

        notes_text = self.Ui.note_browser.toPlainText()

        midi_para = midi_text.replace(' ', '').replace('\t', '').split(',')
        # 默认设置
        bmp = 120
        transposition = 0
        velocity = 72
        duration = 0.5
        duration_total = 4
        offset = 0
        # 文件名设置
        filename = midi_para[0] + '.mid'
        # 解析midi参数
        for para in midi_para[1:]:
            if para[:3] == 'bpm':
                bmp = int(para[4:])
            elif para[0] == 't':
                transposition = int(para[2:])
            elif para[0] == 'v':
                velocity = int(para[2:])
            elif para[0] == 'd':
                duration_midi = para[2:].split('/')
                duration = float(duration_midi[0])
                duration_total = float(duration_midi[1])
            elif para[0] == 'o':
                offset = int(float(para[2:]) * 480)

        with open('midiTex/' + filename + "iTex.txt", "w") as file:
            file.write(midi_text + '\n%%%\n')
            file.write(track_text + '\n%%%\n')
            file.write(notes_text)

        # 解析音轨参数
        keys = []
        track_velocity_set = []
        track_transposition_set = []
        track_duration_set = []
        track_duration_total_set = []
        tracks_text = track_text.replace(' ', '').replace('\t', '').split('\n')
        for texts in tracks_text:
            if texts == '':
                continue
            temp = texts.split(':')
            if temp[0] == 'def':
                continue
            keys.append(temp[0])
            track_para = temp[1].split(',')
            program = int(track_para[0])
            name = track_para[1]
            track_transposition = transposition
            track_velocity = velocity
            track_duration = duration
            track_duration_total = duration_total
            track_offset = offset
            for para in track_para[2:]:
                if para[0] == 't':
                    track_transposition = transposition + int(para[2:])
                elif para[0] == 'v':
                    track_velocity = velocity + int(para[2:])
                elif para[0] == 'd':
                    duration_track = para[2:].split('/')
                    if len(duration_track) == 1:
                        track_duration = float(duration_track[0])
                        track_duration_total = float(duration_track[0])
                    else:
                        track_duration = float(duration_track[0])
                        track_duration_total = float(duration_track[1])
                elif para[0] == 'o':
                    track_offset = offset + int(float(para[2:]) * 480)
            track_velocity_set.append(track_velocity)
            track_transposition_set.append(track_transposition)
            track_duration_set.append(track_duration)
            track_duration_total_set.append(track_duration_total)
            set_track(mid, program, name, bmp, track_offset)

        name2index = dict(zip(keys, range(len(keys))))

        # 解析音符
        select_text = notes_text[select_start:select_end]
        if select_text != '':
            for value in self.def_list:
                select_text = select_text.replace(value[0], value[1])
            note_text_set = select_text.replace(' ', '').replace('\t', '').split('\n')
        else:
            for value in self.def_list:
                notes_text = notes_text.replace(value[0], value[1])
            note_text_set = notes_text.replace(' ', '').replace('\t', '').split('\n')
        for note_text in note_text_set:
            temp = note_text.split(':')
            if len(temp) < 2 or temp[1] == '':
                continue
            track = name2index[temp[0]]
            note_transposition = track_transposition_set[track]
            note_velocity = track_velocity_set[track]
            note_duration = track_duration_set[track]
            note_duration_total = track_duration_total_set[track]
            note_offset = 0
            note_arp = 0
            note_para = temp[1].split(',')
            for note in note_para[1:]:
                if note[0] == 't':
                    note_transposition = note_transposition + int(note[2:])
                elif note[0] == 'v':
                    note_velocity = note_velocity + int(note[2:])
                elif note[0] == 'd':
                    note_duration = float(note[2:])
                    note_duration_total = float(note[2:])
                elif note[0] == 'o':
                    note_offset = int(float(note[2:]) * 480)
                elif note[0] == 'a':
                    note_arp = float(note[2:])
            if note_para[0][:2] == 'ch':
                notes_string = choir(note_para[0][3:-1], note_duration_total)
            elif note_para[0][:2] == 'ar':
                arp_num = note_para[0].split('(')
                if len(arp_num[0]) > 2:
                    note_num = int(arp_num[0][2:])
                else:
                    note_num = 4
                notes_string = arpeggio(arp_num[1][:-1], note_num, note_duration_total)
            else:
                notes_string = note_para[0]
            add(mid, track, notes_string, note_velocity, note_offset, note_duration, note_transposition, note_arp)

        # save the Tex file
        mid.save('midi/' + filename)

        # 播放音乐
        mid_track = []
        global kill_flag
        kill_flag = [True for i in range(len(kill_flag))]
        for i in range(len(keys)):
            self.port.send(Message('control_change', channel=i, control=120, value=0))
        for i, track in enumerate(mid.tracks):
            mid_track.append(mido.MidiFile())
            mid_track[i].tracks.append(track)
            new_thread = threading.Thread(target=play_music, args=(self.port, mid_track[i], len(self.thread_list)))
            self.thread_list.append(new_thread)
            kill_flag.append(False)
        self.channel_num = len(keys)
        for i, thread in enumerate(self.thread_list):
            if not kill_flag[i]:
                thread.start()

        if self.show_result:
            # open Graphic View
            self.graphic_view = GraphicWindow(mid.tracks, bmp)
            self.setGeometry(0, 30, self.Screen.width() / 2 - 100, self.Screen.height() - 78)
            self.graphic_view.setGeometry(self.Screen.width() / 2 - 100, 30, self.Screen.width() / 2 + 100,
                                          self.Screen.height() - 78)
            self.graphic_view.show()

    def save_file(self):
        midi_text = self.Ui.midi_browser.text()
        track_text = self.Ui.track_browser.toPlainText()
        notes_text = self.Ui.note_browser.toPlainText()
        midi_para = midi_text.replace(' ', '').split(',')
        filename = midi_para[0] + '.mid'
        with open('midiTex/' + filename + "iTex.txt", "w") as file:
            file.write(midi_text + '\n%%%\n')
            file.write(track_text + '\n%%%\n')
            file.write(notes_text + '\n')

    def open_file(self):
        path = QtWidgets.QFileDialog.getOpenFileName(self, "打开文件", "./midiTex/")
        # Open the file for reading
        if path[0] != '':
            with open(path[0], "r") as f:
                # Read the contents of the file
                contents = f.read()
        # Split the contents of the file into the original strings
        strings = contents.split("\n%%%\n")
        self.Ui.midi_browser.setText(strings[0])
        self.Ui.track_browser.setText(strings[1])
        self.Ui.note_browser.setText(strings[2])

        self.track_brush(1)

    def new_file(self):
        with open("midiTex/Default", "r") as f:
            contents = f.read()
        # Split the contents of the file into the original strings
        strings = contents.split("\n%%%\n")
        self.Ui.midi_browser.setText(strings[0])
        self.Ui.track_browser.setText(strings[1])
        self.Ui.note_browser.setText(strings[2])

        self.track_brush(0)

    def open_program_list(self):
        self.program_window = ProgramWindow()
        self.program_window.ui.tableView.clicked.connect(self.program_clicked)
        self.program_window.show()

    def program_clicked(self, index):
        program = self.program_window.pos2program[index.row() * 6 + index.column()]
        threading.Thread(target=self.play_note, args=(60, program, 72)).start()

    def play_note(self, note, program, velocity):
        self.port.send(Message('program_change', program=program))
        self.port.send(Message('note_on', note=note, velocity=velocity, time=0))
        time.sleep(1)
        self.port.send(Message('note_off', note=note, velocity=velocity, time=0))


if __name__ == '__main__':
    # 创建窗口
    if not os.path.exists('midi'):
        os.makedirs('midi')
    if not os.path.exists('midiTex'):
        os.makedirs('midiTex')
    app = QtWidgets.QApplication(sys.argv)
    app.setWindowIcon(QIcon('midiTex.ico'))
    w = MainWindow()
    apply_stylesheet(app, theme='dark_amber.xml')
    apply_stylesheet(app, theme='style_c.xml')

    w.set_style()
    app.exec()
