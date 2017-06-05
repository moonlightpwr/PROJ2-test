#-------------------------------------------------
#
# Project created by QtCreator 2017-06-05T13:05:09
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    tower.cpp \
    scene.cpp \
    view.cpp \
    minion.cpp

HEADERS  += mainwindow.h \
    game.h \
    tower.h \
    scene.h \
    view.h \
    minion.h

FORMS    += mainwindow.ui
