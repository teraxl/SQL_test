#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "App.h"

int main(int argc, char *argv[])
{
    App app(argc, argv, "RuTiLink", "DBCatridge");
    MainWindow w;
    w.show();

    QSettings* pst = App::theApp()->settings();
    qDebug() << pst->allKeys();

    return app.exec();
}
