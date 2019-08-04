#ifndef W_ADD_VALUES_H
#define W_ADD_VALUES_H

#include <QWidget>
#include <QDate>
#include <QDateEdit>

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

    void setDateToWidget(const QString &text) const;

private:
    Ui::w_add_values *ui;

private:
    QLineEdit *nameOrg;
    QLineEdit *model;
    QLineEdit *id;
    QLineEdit *sn;
    QLineEdit *completeWork;
    QLineEdit *zhalobi;
    QLineEdit *comments;
    QPushButton *btnAddData;
    QDateEdit *dataRemonta;
    QTimer *timer;
    bool getStatus(QLineEdit *edit);
    int count;
};

#endif // W_ADD_VALUES_H
