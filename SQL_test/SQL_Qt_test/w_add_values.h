#ifndef W_ADD_VALUES_H
#define W_ADD_VALUES_H

#include <QWidget>
#include <QDate>
#include <QDateEdit>
#include <qcalendarwidget.h>
#include <QLabel>
#include "checkeditline.h"

class QLineEdit;
class QPushButton;

namespace Ui {
class w_add_values;
}

class w_add_values : public QWidget
{
    Q_OBJECT

public:
    explicit w_add_values(QWidget *parent = nullptr);
    ~w_add_values();

private slots:
    void on_btn_add_new_data_clicked();
    void on_btn_add_update_data_clicked();
    void setBtnEnabled();
    void setDateA(const QDate &date);
    void setDateU(const QDate &date);

private:
    Ui::w_add_values *ui;

private:
    CheckEditLine *ce;
    QLineEdit *nameOrg;
    QLineEdit *model;
    QLineEdit *id;
    QLineEdit *sn;
    QLineEdit *completeWork;
    QLineEdit *zhalobi;
    QLineEdit *comments;
    QPushButton *btn_add_date_remonta;
    QPushButton *btn_update_data_remonta;
    QLabel *lbl_add_data_remonta;
    QLabel *lbl_update_data_remonta;
    QTimer *timer;
    bool getStatus(QLineEdit *edit);
    int count;
    QCalendarWidget *calWidgetA;
    QCalendarWidget *calWidgetU;
};

#endif // W_ADD_VALUES_H
