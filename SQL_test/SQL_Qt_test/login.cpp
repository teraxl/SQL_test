#include "login.h"
#include "ui_login.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlResult>
#include "App.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login),
    serverName(""), dbName(""), userName(""), userPassword("")
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    this->setFixedSize(this->geometry().size());
    this->setWindowTitle("Подключение к базе данных");
    this->setWindowModality(Qt::ApplicationModal);
    this->activateWindow();
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);

    App::theApp()->settings()->beginGroup("Settings");
    serverName = App::theApp()->settings()->value("/ServerName", "").toString();
    dbName = App::theApp()->settings()->value("/DbName", "").toString();
    userName = App::theApp()->settings()->value("/UserName", "").toString();
    userPassword = App::theApp()->settings()->value("/UserPassword", "").toString();
    App::theApp()->settings()->endGroup();

    ui->lineEdit->setText(serverName);
    ui->lineEdit_2->setText(dbName);
    ui->lineEdit_3->setText(userName);
    ui->lineEdit_4->setText(userPassword);

    mes = new QMessageBox();
}

Login::~Login()
{
    delete ui;
    App::theApp()->writeSettings(
                ui->lineEdit->text(),
                ui->lineEdit_2->text(),
                ui->lineEdit_3->text(),
                ui->lineEdit_4->text());
}

void Login::on_pushButton_clicked()
{
//    For MS SQL Server
//    db = QSqlDatabase::addDatabase("QODBC");
//    db.setDatabaseName(QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;")
//                       .arg(ui->lineEdit->text())
//                       .arg(ui->lineEdit_2->text()));
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName(ui->lineEdit_2->text());
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());

    if (db.open()){
        mes->setText("Соединение успешно");
    } else {
        mes->setText("Fail connected");
    }

    QString strQuery =
            "SELECT id "
            "FROM client "
            "where name_client = 'Титан-Логистик';";

    QSqlQuery *query = new QSqlQuery();
    if (!query->exec(strQuery))
    {
        qDebug() << query->lastError().text();
        return;
    }

    QSqlRecord m_rec = query->record();
    QStringList strList;

//    while (query->next()) {
//        strList.append(query->value(m_rec.indexOf("id")).toString());
//    }

    qDebug() << query->value(m_rec.indexOf("id")).toString();

    qDebug() << strList;

    mes->show();
}
