TEMPLATE = lib

QT       += core gui widgets webkitwidgets

QMAKE_CXXFLAGS += -std=c++14

CONFIG += staticlib

HEADERS = acekit.h

SOURCES = acekit.cpp

RESOURCES += \
    acekit.qrc
