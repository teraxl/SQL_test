#include "App.h"
#include "mainwindow.h"

App::App(int &argc, char **argv, const QString &strOrg, const QString &strAppName)
    : QApplication(argc, argv)
    , m_pSettings(nullptr)
{
    mainWindow = new MainWindow();
    setOrganizationName(strOrg);
    setApplicationName(strAppName);

    m_pSettings = new QSettings(strOrg, strAppName, this);
}

App *App::theApp()
{
    return qobject_cast<App*>(qApp);
}

QSettings *App::settings()
{
    return m_pSettings;
}

void App::writeSettings(const QString& serverName,
                        const QString& dbName,
                        const QString& userName,
                        const QString& userPassword)
{
    m_pSettings->beginGroup("/Settings");
    m_pSettings->setValue("/ServerName", serverName);
    m_pSettings->setValue("DbName", dbName);
    m_pSettings->setValue("UserName", userName);
    m_pSettings->setValue("/UserPassword", userPassword);
    m_pSettings->endGroup();
}
