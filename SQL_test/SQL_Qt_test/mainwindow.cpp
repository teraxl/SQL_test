//#include "xlsxdocument.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCheckBox>
#include <QAxObject>
#include <QException>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window |
                         Qt::WindowCloseButtonHint |
                         Qt::WindowMinimizeButtonHint);
    this->setFixedSize(this->geometry().size());
    w_add_v = new w_add_values();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete w_add_v;
}

void MainWindow::writeSettings()
{

}

void MainWindow::on_actionConnect_Database_triggered()
{
    login = new Login();
    login->show();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit(0);
}

void MainWindow::on_actionShowWorkSheet_triggered()
{

}

void MainWindow::on_btn_add_value_clicked()
{
    w_add_v->show();
}
