TEMPLATE = lib

QT       += core gui widgets webkitwidgets

QMAKE_CXXFLAGS += -std=c++11

CONFIG += staticlib

HEADERS = acekit.h

SOURCES = acekit.cpp

RESOURCES += \
    acekit.qrc
