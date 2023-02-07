1、编译
1、Compile：

使用nuitka编译
Use muitka to compile

python -m nuitka --standalone --show-progress --plugin-enable=pyside6 --output-dir=Release --include-qt-plugins=sensible,styles,qt_material --windows-icon-from-ico=midiTex.ico  main.py

编译后复制“复制”文件夹下所有文件到main.dist目录下。
After compiling, copy all files in the “复制” folder to the "main.dist" directory.