#include "w_add_values.h"
#include "ui_w_add_values.h"
#include <QPushButton>
#include <QLineEdit>
#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QAction>
#include <QCalendarWidget>
#include <QDateEdit>
#include <QDate>
#include <QStyle>
#include <Qt>

w_add_values::w_add_values(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_add_values)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint );
    this->setWindowIcon(QIcon(":/icons/icone.png"));
    this->setFixedSize(this->geometry().size());
    this->setWindowTitle("Добавление записей");
    this->setWindowModality(Qt::ApplicationModal);
    this->activateWindow();

    nameOrg         = qobject_cast<QLineEdit*>(ui->txt_name_org);
    model           = qobject_cast<QLineEdit*>(ui->txt_model_catridge);
    id              = qobject_cast<QLineEdit*>(ui->txt_id_catridge);
    sn              = qobject_cast<QLineEdit*>(ui->txt_sn);
    completeWork    = qobject_cast<QLineEdit*>(ui->txt_vip_rabot);
    zhalobi         = qobject_cast<QLineEdit*>(ui->txt_zhalobi);
    comments        = qobject_cast<QLineEdit*>(ui->txt_commentarii);
    lbl_add_data_remonta = qobject_cast<QLabel*>(ui->lbl_add_data_remonta);
    lbl_update_data_remonta = qobject_cast<QLabel*>(ui->lbl_update_data_remonta);
    btn_add_date_remonta = qobject_cast<QPushButton*>(ui->btn_add_date_remonta);
    btn_update_data_remonta = qobject_cast<QPushButton*>(ui->btn_update_data_remonta);

    QDate currentDate = QDate::currentDate();
    QString date = currentDate.toString("dd.MM.yyyy");

    lbl_add_data_remonta->setText(date);
    lbl_update_data_remonta->setText(date);

    calWidget = new QCalendarWidget();
    calWidget->setGridVisible(true);
    calWidget->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    calWidget->setWindowModality(Qt::ApplicationModal);
    calWidget->setWindowTitle("Enter date");

    connect(btn_add_date_remonta, &QPushButton::clicked, calWidget, &QCalendarWidget::show);
    connect(calWidget, &QCalendarWidget::clicked, this, &w_add_values::setDate);
}

w_add_values::~w_add_values()
{
    delete ui;
}

void w_add_values::on_btn_add_new_data_clicked()
{

}

void w_add_values::on_btn_add_update_data_clicked()
{

}

void w_add_values::setBtnEnabled()
{

}

void w_add_values::setDate(const QDate &date)
{
    lbl_add_data_remonta->setText(date.toString("dd.MM.yyyy"));
}

bool w_add_values::getStatus(QLineEdit *edit)
{
    return 0;
}

