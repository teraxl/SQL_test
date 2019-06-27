#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCheckBox>
#include <QAxObject>
#include <QException>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <libxl.h>
#include "xlsxdocument.h"

using namespace libxl;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::on_actionShowWorkSheet_triggered()
{
    QXlsx::Document xlsx;
    xlsx.write("A1", "Hello Qt!");
    xlsx.saveAs("Test.xlsx");
}
