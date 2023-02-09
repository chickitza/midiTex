# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'midiTex.ui'
##
## Created by: Qt User Interface Compiler version 6.4.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QLineEdit, QMainWindow, QMenu,
    QMenuBar, QSizePolicy, QTextBrowser, QVBoxLayout,
    QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(700, 480)
        self.actionnew = QAction(MainWindow)
        self.actionnew.setObjectName(u"actionnew")
        self.actionopen = QAction(MainWindow)
        self.actionopen.setObjectName(u"actionopen")
        self.actionsave = QAction(MainWindow)
        self.actionsave.setObjectName(u"actionsave")
        self.actionprogram_list = QAction(MainWindow)
        self.actionprogram_list.setObjectName(u"actionprogram_list")
        self.actionrun = QAction(MainWindow)
        self.actionrun.setObjectName(u"actionrun")
        self.actionPrograma_Rule_Ctrl_R = QAction(MainWindow)
        self.actionPrograma_Rule_Ctrl_R.setObjectName(u"actionPrograma_Rule_Ctrl_R")
        self.actionresult = QAction(MainWindow)
        self.actionresult.setObjectName(u"actionresult")
        self.actionresult.setCheckable(True)
        self.actionresult.setChecked(True)
        self.actioncolor = QAction(MainWindow)
        self.actioncolor.setObjectName(u"actioncolor")
        self.actioncolor.setCheckable(True)
        self.actioncolor.setChecked(True)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.midi_browser = QLineEdit(self.centralwidget)
        self.midi_browser.setObjectName(u"midi_browser")
        font = QFont()
        font.setFamilies([u"Cascadia Code"])
        font.setPointSize(11)
        self.midi_browser.setFont(font)

        self.verticalLayout.addWidget(self.midi_browser)

        self.track_browser = QTextBrowser(self.centralwidget)
        self.track_browser.setObjectName(u"track_browser")
        self.track_browser.setMaximumSize(QSize(16777215, 84))
        self.track_browser.setFont(font)
        self.track_browser.viewport().setProperty("cursor", QCursor(Qt.IBeamCursor))
        self.track_browser.setUndoRedoEnabled(False)
        self.track_browser.setReadOnly(False)
        self.track_browser.setAcceptRichText(False)

        self.verticalLayout.addWidget(self.track_browser)

        self.note_browser = QTextBrowser(self.centralwidget)
        self.note_browser.setObjectName(u"note_browser")
        font1 = QFont()
        font1.setFamilies([u"Cascadia Code"])
        font1.setPointSize(11)
        font1.setBold(False)
        self.note_browser.setFont(font1)
        self.note_browser.viewport().setProperty("cursor", QCursor(Qt.IBeamCursor))
        self.note_browser.setLocale(QLocale(QLocale.English, QLocale.UnitedStates))
        self.note_browser.setUndoRedoEnabled(False)
        self.note_browser.setReadOnly(False)
        self.note_browser.setAcceptRichText(False)

        self.verticalLayout.addWidget(self.note_browser)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 700, 22))
        self.menu_F = QMenu(self.menubar)
        self.menu_F.setObjectName(u"menu_F")
        self.menu_H = QMenu(self.menubar)
        self.menu_H.setObjectName(u"menu_H")
        self.menu_S = QMenu(self.menubar)
        self.menu_S.setObjectName(u"menu_S")
        MainWindow.setMenuBar(self.menubar)

        self.menubar.addAction(self.menu_F.menuAction())
        self.menubar.addAction(self.menu_S.menuAction())
        self.menubar.addAction(self.menu_H.menuAction())
        self.menu_F.addAction(self.actionnew)
        self.menu_F.addAction(self.actionopen)
        self.menu_F.addAction(self.actionsave)
        self.menu_F.addSeparator()
        self.menu_F.addAction(self.actionrun)
        self.menu_H.addAction(self.actionprogram_list)
        self.menu_H.addAction(self.actionPrograma_Rule_Ctrl_R)
        self.menu_S.addAction(self.actionresult)
        self.menu_S.addAction(self.actioncolor)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"midiTex", None))
        self.actionnew.setText(QCoreApplication.translate("MainWindow", u"New (Ctrl + N)", None))
        self.actionopen.setText(QCoreApplication.translate("MainWindow", u"Open (Ctrl + O)", None))
        self.actionsave.setText(QCoreApplication.translate("MainWindow", u"Save (Ctrl + Shift + S)", None))
        self.actionprogram_list.setText(QCoreApplication.translate("MainWindow", u"Program List (Ctrl + P)", None))
        self.actionrun.setText(QCoreApplication.translate("MainWindow", u"Save & Run (Ctrl + S)", None))
        self.actionPrograma_Rule_Ctrl_R.setText(QCoreApplication.translate("MainWindow", u"Gramma Rules(Ctrl + G)", None))
        self.actionresult.setText(QCoreApplication.translate("MainWindow", u"Show Result", None))
        self.actioncolor.setText(QCoreApplication.translate("MainWindow", u"Colorful Text", None))
        self.midi_browser.setText(QCoreApplication.translate("MainWindow", u"NewFile, bpm=120, v=60, t=0, d=1/2", None))
        self.track_browser.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Cascadia Code'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0: 0, piano1, t=12</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1: 29, piano2, v=-24</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2: 8, piano3, t=-12, v=-12</p></body></html>", None))
        self.note_browser.setHtml(QCoreApplication.translate("MainWindow", u"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Cascadia Code'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0: c-c g-g a-a ;[2]{ceg} f-f e-e d-d [2]{egc}</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1: ch(C; C on E; F on C; C; Bdim; C; Csus4; C)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2: ar8(C), d = 4</p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2: ar4(F; C; G; C; G; C), d = 2</p></body></html>", None))
        self.menu_F.setTitle(QCoreApplication.translate("MainWindow", u"File", None))
        self.menu_H.setTitle(QCoreApplication.translate("MainWindow", u"Help", None))
        self.menu_S.setTitle(QCoreApplication.translate("MainWindow", u"Settings", None))
    # retranslateUi

