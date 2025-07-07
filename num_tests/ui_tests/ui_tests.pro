QT += testlib
QT       += core gui
QT += widgets
QT += gui
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_test_ui.cpp \
    ../num_class/mainwindow.cpp \
    ../num_class/num.cpp

FORMS += \
    ../num_class/mainwindow.ui

HEADERS += \
    ../num_class/mainwindow.h \
    ../num_class/num.h
CONFIG += testcase
