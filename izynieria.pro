TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    stankonta.cpp \
    odczytzpliku.cpp \
    przelejnakonto.cpp \
    sciagnijzkonta.cpp \
    transakcja.cpp \
    polecenie.cpp \
    obserwowany.cpp \
    obserwator.cpp \
    obserwatorkont.cpp \
    obserwatortransakcji.cpp

HEADERS += \
    stankonta.h \
    odczytzpliku.h \
    przelejnakonto.h \
    sciagnijzkonta.h \
    transakcja.h \
    polecenie.h \
    obserwowany.h \
    obserwator.h \
    obserwatorkont.h \
    obserwatortransakcji.h
