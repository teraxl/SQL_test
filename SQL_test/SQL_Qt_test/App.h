#ifndef APP_H
#define APP_H

#include <QApplication>
#include <QSettings>
#include "mainwindow.h"

class App : public QApplication
{
    Q_OBJECT

private:
    QSettings* m_pSettings;

public:
    App(int& argc,
        char** argv,
        const QString& strOrg,
        const QString& strAppName);

    static App* theApp();
    QSettings* settings();

    void writeSettings(const QString &serverName,
                       const QString &dbName,
                       const QString &userName,
                       const QString &userPassword);
    void readSettings();
    MainWindow* mainWindow;

};

#endif // APP_H
