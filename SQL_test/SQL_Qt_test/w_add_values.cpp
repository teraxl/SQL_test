#include "w_add_values.h"
#include "ui_w_add_values.h"

w_add_values::w_add_values(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_add_values)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    this->setFixedSize(this->geometry().size());
    this->setWindowTitle("Добавление записей");
    this->setWindowModality(Qt::ApplicationModal);
    this->activateWindow();
}

w_add_values::~w_add_values()
{
    delete ui;
}

void w_add_values::on_pushButton_clicked()
{

}
