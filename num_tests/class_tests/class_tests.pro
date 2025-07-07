QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_num_lib.cpp \
    ../num_class/num.cpp
HEADERS += \
    ../num_class/num.h
