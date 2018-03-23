TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    formes.cpp \
    point.cpp \
    line.cpp \
    rectangle.cpp \
    circle.cpp

HEADERS += \
    formes.h \
    point.h \
    line.h \
    rectangle.h \
    circle.h
