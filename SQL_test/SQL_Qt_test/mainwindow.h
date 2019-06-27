#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "ui_login.h"
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void readSettings();
    void writeSettings();

private slots:
    void on_actionConnect_Database_triggered();

    void on_actionExit_triggered();

    void on_actionShowWorkSheet_triggered();

private:
    Ui::MainWindow *ui;
    Login *login;
    QSettings m_settings;

};

#endif // MAINWINDOW_H
