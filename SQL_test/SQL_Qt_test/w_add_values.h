#ifndef W_ADD_VALUES_H
#define W_ADD_VALUES_H

#include <QWidget>

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

private:
    Ui::w_add_values *ui;
};

#endif // W_ADD_VALUES_H