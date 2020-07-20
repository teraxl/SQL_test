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

#include <QMetaObject>
#include <QStringList>
#include <QMetaProperty>
#include <QSignalTransition>
#include <QDesktopWidget>

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

    calWidgetA = new QCalendarWidget();
    calWidgetA->setGridVisible(false);
    calWidgetA->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
    calWidgetA->setWindowModality(Qt::ApplicationModal);
    calWidgetA->setWindowTitle("Выберите интересующюю вас дату");
    calWidgetA->activateWindow();

    QDesktopWidget *dw = new QDesktopWidget;
    qDebug() << dw->availableGeometry(this).size();
    qDebug() << dw->screenNumber(this);


    calWidgetU = new QCalendarWidget();
    calWidgetU->setGridVisible(true);
    calWidgetU->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
    calWidgetU->setWindowModality(Qt::ApplicationModal);
    calWidgetU->setWindowTitle("Выберите интересующюю вас дату");

    connect(btn_add_date_remonta, &QPushButton::clicked, calWidgetA, &QCalendarWidget::show);
    connect(btn_update_data_remonta, &QPushButton::clicked, calWidgetU, &QCalendarWidget::show);
    connect(calWidgetA, &QCalendarWidget::clicked, calWidgetA, &QCalendarWidget::close);
    connect(calWidgetU, &QCalendarWidget::clicked, calWidgetU, &QCalendarWidget::close);
    connect(calWidgetA, &QCalendarWidget::clicked, this, &w_add_values::setDateA);
    connect(calWidgetU, &QCalendarWidget::clicked, this, &w_add_values::setDateU);
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

void w_add_values::setDateU(const QDate &date)
{
    lbl_update_data_remonta->setText(date.toString("dd.MM.yyyy"));
}

void w_add_values::setDateA(const QDate &date)
{
    lbl_add_data_remonta->setText(date.toString("dd.MM.yyyy"));
}

bool w_add_values::getStatus(QLineEdit *edit)
{
    return 0;
}

