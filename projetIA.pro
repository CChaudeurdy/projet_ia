TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    variable.cc \
    domaine.cc \
    contrainte.cc

HEADERS += \
    variable.hh \
    domaine.hh \
    contrainte.hh

