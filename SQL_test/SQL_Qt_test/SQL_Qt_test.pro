#-------------------------------------------------
#
# Project created by QtCreator 2019-06-05T00:19:16
#
#-------------------------------------------------

#include(E:\_DEVELOPER_\Github\QtXlsxWriter\src\xlsx\qtxlsx.pri)

QT += core gui sql axcontainer widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SQL_Qt_test
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++14

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    login.cpp \
    w_add_values.cpp

HEADERS += \
        mainwindow.h \
    login.h \
    w_add_values.h

FORMS += \
        mainwindow.ui \
    login.ui \
    w_add_values.ui

#Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DESTDIR = ..\..\..\..\QtXLSDebug
win32:QMAKE_POST_LINK += windeployqt --release $$OUT_PWD/$$DESTDIR


