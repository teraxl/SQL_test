#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "ui_login.h"
#include <QSettings>
#include "w_add_values.h"

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

    void on_btn_add_value_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
    QSettings m_settings;
    w_add_values *w_add_v;

};

#endif // MAINWINDOW_H
