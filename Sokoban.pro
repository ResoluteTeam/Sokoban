TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    visible.cpp \
    fieldobject.cpp \
    teleport.cpp \
    wall.cpp \
    box.cpp \
    target.cpp \
    man.cpp \
    level.cpp \
    statisticstable.cpp \
    gamefield.cpp \
    player.cpp \
    moving.cpp \
    levelmanager.cpp \
    sokoban.cpp

HEADERS += \
    visible.h \
    fieldobject.h \
    teleport.h \
    wall.h \
    box.h \
    target.h \
    man.h \
    level.h \
    statisticstable.h \
    gamefield.h \
    player.h \
    moving.h \
    levelmanager.h \
    sokoban.h
