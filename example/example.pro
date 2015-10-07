#-------------------------------------------------
#
# Project created by QtCreator 2015-09-29T00:45:16
#
#-------------------------------------------------

QT       += core gui widgets webkitwidgets

TARGET = ../qacekit
TEMPLATE = app

INCLUDEPATH = ../acekit/

SOURCES += main.cpp\
mainwindow.cpp

QMAKE_CXXFLAGS += -std=c++11

HEADERS  += mainwindow.h\
../acekit/acekit.h

FORMS    += mainwindow.ui
LIBS += ../acekit/libacekit.a
