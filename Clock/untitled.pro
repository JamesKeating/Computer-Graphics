QT += core
QT -= gui

CONFIG += c++11

TARGET = untitled
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    clock.cpp \
    normal_clock.cpp \
    alarm_clock.cpp \
    reverse_clock.cpp

HEADERS += \
    clock.h \
    normal_clock.h \
    alarm_clock.h \
    reverse_clock.h

DISTFILES +=
