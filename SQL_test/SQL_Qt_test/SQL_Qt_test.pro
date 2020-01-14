#-------------------------------------------------
#
# Project created by QtCreator 2019-06-05T00:19:16
#
#-------------------------------------------------

#include(E:\_DEVELOPER_\Github\QtXlsxWriter\src\xlsx\qtxlsx.pri)

QT += core gui sql axcontainer widgets
#ICON = ":/icons/1024x1024bb.png"
RC_FILE = resource.rc

TARGET = SQL_Qt_test
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++14

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    login.cpp \
    sqlquerydata.cpp \
    w_add_values.cpp \
    checkeditline.cpp

HEADERS += \
        mainwindow.h \
    login.h \
    sqlquerydata.h \
    w_add_values.h \
    checkeditline.h

FORMS += \
        mainwindow.ui \
    login.ui \
    w_add_values.ui


win32 {
    DESTDIR = ..\Release
    QMAKE_POST_LINK += windeployqt --release $$OUT_PWD/$$DESTDIR
}

RESOURCES += \
    resorces.qrc
