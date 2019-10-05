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

    ce = new CheckEditLine(this);

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

    nameOrg->addAction(action1);
    nameOrg->addAction(action2);
    nameOrg->setContextMenuPolicy(Qt::ActionsContextMenu);

    connect(dataRemonta, &QDateEdit::editingFinished, cw, &QCalendarWidget::show);
}

w_add_values::~w_add_values()
{
    delete ui;
}

void w_add_values::on_btn_add_new_data_clicked()
{
    bool a = true;
    bool b = true;
    bool c = true;
    bool d = true;
    bool e = true;
    bool f = true;
    bool g = true;

    qDebug() << ((a && b) && (c && d) && (e && f && g));

}

void w_add_values::on_btn_add_update_data_clicked()
{

}

void w_add_values::setBtnEnabled()
{

}

bool w_add_values::getStatus(QLineEdit *edit)
{
    return !edit->text().isEmpty();
}

