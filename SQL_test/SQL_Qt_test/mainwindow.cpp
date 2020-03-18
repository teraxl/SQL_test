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
#include <QModelIndex>
#include <QDirModel>
#include <QWidget>
#include <QtGui>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window |
                         Qt::WindowCloseButtonHint |
                         Qt::WindowMinimizeButtonHint);
    this->setWindowIcon(QIcon(":/icons/icone.png"));
    this->setWindowTitle("Программа по учету катриджей");
    this->setFixedSize(this->geometry().size());
    ui->treeWidget->setHeaderLabel("Организации");
    w_add_v = new w_add_values();

    list << "Евротек" << "Новотек" << "Титан-Логистик" << "Аврора";

    for (int i = 0; i < list.size(); ++i) {
        item = new QTreeWidgetItem(ui->treeWidget);
        item->setText(0, list.at(i));
    }

    item->setExpanded(false);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete w_add_v;
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

void MainWindow::on_btn_add_value_clicked()
{
    w_add_v->show();
}
