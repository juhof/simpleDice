#-------------------------------------------------
#
# Project created by QtCreator 2018-04-29T23:07:48
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = random_dice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dice.cpp \
    random.cpp

HEADERS  += mainwindow.h \
    dice.h \
    random.h

FORMS    += mainwindow.ui


RESOURCES += \
    images.qrc
