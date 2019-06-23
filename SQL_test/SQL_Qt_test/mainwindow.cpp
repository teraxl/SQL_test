#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCheckBox>
#include <QAxObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow m;

    QString str = "abcde values()";

}

MainWindow::~MainWindow()
{
    delete ui;
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
