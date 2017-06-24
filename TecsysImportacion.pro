#-------------------------------------------------
#
# Project created by QtCreator 2017-03-28T12:34:15
#
#-------------------------------------------------

QT       += core gui sql sql network axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TecsysImportacion
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    config.cpp \
    generictype.cpp

HEADERS  += mainwindow.h \
    config.h \
    generictype.h

FORMS    += mainwindow.ui \
    config.ui

RESOURCES += \
    resource.qrc
