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
    this->setFixedSize(this->geometry().size());
    w_add_v = new w_add_values();

//    QStandardItemModel model(5, 3);
    QStandardItemModel *model = new QStandardItemModel(this);
    model->setRowCount(5);
    model->setColumnCount(3);
    QDirModel *model2 = new QDirModel(this);
    model2->setReadOnly(false);

    for (int nTopRow = 0; nTopRow < 5; ++nTopRow) {
        QModelIndex index = model->index(nTopRow, 0);
        model->setData(index, "item" + QString::number(nTopRow + 1));

        model->insertRows(0, 4, index);
        model->insertColumns(0, 3, index);
        for (int nRow = 0; nRow < 4; ++nRow) {
            for (int nCol = 0; nCol < 3; ++nCol) {
                QString strPos = QString("%1,%2").arg(nRow).arg(nCol);
                qDebug() << "strPos ----> " << strPos;
                model->setData(model->index(nRow, nCol, index), strPos);
            }
        }
    }
    ui->treeView->setModel(model);
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
