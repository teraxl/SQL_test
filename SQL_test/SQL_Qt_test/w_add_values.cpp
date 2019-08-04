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
#include <QStyle>

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
    btnAddData      = qobject_cast<QPushButton*>(ui->btn_add_new_data);
    dataRemonta     = qobject_cast<QDateEdit*>(ui->data_remonta);

    nameOrg->setFocus();

    QAction *action1 = new QAction("New");
    QAction *action2 = new QAction("Delete");

    QCalendarWidget *cw = new QCalendarWidget();
    cw->setWindowModality(Qt::ApplicationModal);



//    cw->showToday();

    nameOrg->addAction(action1);
    nameOrg->addAction(action2);
    nameOrg->setContextMenuPolicy(Qt::ActionsContextMenu);

    connect(dataRemonta, &QDateEdit::editingFinished, cw, &QCalendarWidget::show);
    QObject *obj = new QObject(this);

//    connect(this, &QObject::sender->object, )

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &w_add_values::setBtnEnabled);\
    timer->start(100);
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

void w_add_values::setDateToWidget(const QString &text) const
{

}

bool w_add_values::getStatus(QLineEdit *edit)
{
    return !edit->text().isEmpty();
}

void w_add_values::changeEvent(QEvent *)
{
    qDebug() << "event";
}

