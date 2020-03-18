#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "ui_login.h"
#include <QSettings>
#include <QTreeWidgetItem>
#include "w_add_values.h"
#include <QApplication>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionConnect_Database_triggered();

    void on_actionExit_triggered();

    void on_btn_add_value_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
    w_add_values *w_add_v;
    QTreeWidgetItem *item;
    QStringList list;

};

#endif // MAINWINDOW_H
