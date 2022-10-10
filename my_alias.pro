QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_words.cpp \
    category.cpp \
    groups.cpp \
    home.cpp \
    main.cpp \
    my_alias.cpp \
    play.cpp \
    rules.cpp

HEADERS += \
    add_words.h \
    category.h \
    groups.h \
    home.h \
    my_alias.h \
    play.h \
    rules.h

FORMS += \
    add_words.ui \
    category.ui \
    groups.ui \
    home.ui \
    my_alias.ui \
    play.ui \
    rules.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
