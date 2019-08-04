/********************************************************************************
** Form generated from reading UI file 'w_add_values.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_ADD_VALUES_H
#define UI_W_ADD_VALUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_add_values
{
public:
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *page;
    QLabel *label;
    QLineEdit *txt_name_org;
    QLabel *label_2;
    QLineEdit *txt_model_catridge;
    QLabel *label_3;
    QLineEdit *txt_id_catridge;
    QLabel *label_4;
    QTextEdit *txt_vip_rabot;
    QTextEdit *txt_zhalobi;
    QLabel *label_5;
    QTextEdit *txt_commentarii;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *data_remonta;
    QPushButton *btn_add_new_data;
    QLabel *label_8;
    QLineEdit *txt_sn;
    QWidget *page_2;
    QLabel *label_9;
    QComboBox *cb_name_org;
    QPushButton *btn_add_update_data;
    QLabel *label_10;
    QComboBox *cb_le_id_catridge;
    QLineEdit *le_id_catridge;
    QLineEdit *update_txt_model_catridge;
    QLabel *label_11;
    QLineEdit *le_sn_catridge;
    QLabel *label_12;
    QDateEdit *update_data_remonta;
    QTextEdit *update_txt_commentarii;
    QTextEdit *update_txt_vip_rabot;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *update_txt_zhalobi;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QWidget *w_add_values)
    {
        if (w_add_values->objectName().isEmpty())
            w_add_values->setObjectName(QString::fromUtf8("w_add_values"));
        w_add_values->resize(645, 466);
        gridLayout = new QGridLayout(w_add_values);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolBox = new QToolBox(w_add_values);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 627, 394));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 151, 16));
        txt_name_org = new QLineEdit(page);
        txt_name_org->setObjectName(QString::fromUtf8("txt_name_org"));
        txt_name_org->setGeometry(QRect(10, 30, 141, 21));
        txt_name_org->setText(QString::fromUtf8(""));
        txt_name_org->setFrame(true);
        txt_name_org->setPlaceholderText(QString::fromUtf8(""));
        txt_name_org->setClearButtonEnabled(true);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 151, 16));
        txt_model_catridge = new QLineEdit(page);
        txt_model_catridge->setObjectName(QString::fromUtf8("txt_model_catridge"));
        txt_model_catridge->setGeometry(QRect(10, 80, 141, 21));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 151, 16));
        txt_id_catridge = new QLineEdit(page);
        txt_id_catridge->setObjectName(QString::fromUtf8("txt_id_catridge"));
        txt_id_catridge->setGeometry(QRect(10, 130, 141, 21));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 10, 151, 16));
        txt_vip_rabot = new QTextEdit(page);
        txt_vip_rabot->setObjectName(QString::fromUtf8("txt_vip_rabot"));
        txt_vip_rabot->setGeometry(QRect(180, 30, 431, 70));
        txt_zhalobi = new QTextEdit(page);
        txt_zhalobi->setObjectName(QString::fromUtf8("txt_zhalobi"));
        txt_zhalobi->setGeometry(QRect(180, 130, 431, 70));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 110, 151, 16));
        txt_commentarii = new QTextEdit(page);
        txt_commentarii->setObjectName(QString::fromUtf8("txt_commentarii"));
        txt_commentarii->setGeometry(QRect(180, 230, 431, 70));
        txt_commentarii->setInputMethodHints(Qt::ImhMultiLine);
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 210, 151, 16));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(500, 330, 81, 16));
        data_remonta = new QDateEdit(page);
        data_remonta->setObjectName(QString::fromUtf8("data_remonta"));
        data_remonta->setGeometry(QRect(500, 360, 110, 22));
        btn_add_new_data = new QPushButton(page);
        btn_add_new_data->setObjectName(QString::fromUtf8("btn_add_new_data"));
        btn_add_new_data->setGeometry(QRect(20, 360, 111, 21));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 160, 151, 16));
        txt_sn = new QLineEdit(page);
        txt_sn->setObjectName(QString::fromUtf8("txt_sn"));
        txt_sn->setGeometry(QRect(10, 180, 141, 21));
        toolBox->addItem(page, QString::fromUtf8("\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 627, 394));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 141, 16));
        cb_name_org = new QComboBox(page_2);
        cb_name_org->setObjectName(QString::fromUtf8("cb_name_org"));
        cb_name_org->setGeometry(QRect(10, 30, 141, 22));
        btn_add_update_data = new QPushButton(page_2);
        btn_add_update_data->setObjectName(QString::fromUtf8("btn_add_update_data"));
        btn_add_update_data->setGeometry(QRect(20, 360, 121, 21));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 141, 16));
        cb_le_id_catridge = new QComboBox(page_2);
        cb_le_id_catridge->setObjectName(QString::fromUtf8("cb_le_id_catridge"));
        cb_le_id_catridge->setGeometry(QRect(160, 90, 21, 22));
        le_id_catridge = new QLineEdit(page_2);
        le_id_catridge->setObjectName(QString::fromUtf8("le_id_catridge"));
        le_id_catridge->setGeometry(QRect(10, 90, 141, 21));
        le_id_catridge->setFrame(true);
        update_txt_model_catridge = new QLineEdit(page_2);
        update_txt_model_catridge->setObjectName(QString::fromUtf8("update_txt_model_catridge"));
        update_txt_model_catridge->setGeometry(QRect(10, 150, 141, 21));
        update_txt_model_catridge->setFrame(true);
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 130, 141, 16));
        le_sn_catridge = new QLineEdit(page_2);
        le_sn_catridge->setObjectName(QString::fromUtf8("le_sn_catridge"));
        le_sn_catridge->setGeometry(QRect(10, 220, 141, 21));
        le_sn_catridge->setFrame(true);
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 200, 141, 16));
        update_data_remonta = new QDateEdit(page_2);
        update_data_remonta->setObjectName(QString::fromUtf8("update_data_remonta"));
        update_data_remonta->setGeometry(QRect(510, 360, 110, 22));
        update_txt_commentarii = new QTextEdit(page_2);
        update_txt_commentarii->setObjectName(QString::fromUtf8("update_txt_commentarii"));
        update_txt_commentarii->setGeometry(QRect(190, 230, 421, 70));
        update_txt_vip_rabot = new QTextEdit(page_2);
        update_txt_vip_rabot->setObjectName(QString::fromUtf8("update_txt_vip_rabot"));
        update_txt_vip_rabot->setGeometry(QRect(190, 30, 421, 70));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(190, 110, 151, 16));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(190, 210, 151, 16));
        update_txt_zhalobi = new QTextEdit(page_2);
        update_txt_zhalobi->setObjectName(QString::fromUtf8("update_txt_zhalobi"));
        update_txt_zhalobi->setGeometry(QRect(190, 130, 421, 70));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(510, 330, 81, 16));
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(190, 10, 151, 16));
        toolBox->addItem(page_2, QString::fromUtf8("\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \321\201 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265\320\274 \320\264\320\260\320\275\320\275\321\213\321\205"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

        QWidget::setTabOrder(txt_name_org, txt_model_catridge);
        QWidget::setTabOrder(txt_model_catridge, txt_id_catridge);
        QWidget::setTabOrder(txt_id_catridge, txt_sn);
        QWidget::setTabOrder(txt_sn, txt_vip_rabot);
        QWidget::setTabOrder(txt_vip_rabot, txt_zhalobi);
        QWidget::setTabOrder(txt_zhalobi, txt_commentarii);
        QWidget::setTabOrder(txt_commentarii, data_remonta);
        QWidget::setTabOrder(data_remonta, btn_add_new_data);
        QWidget::setTabOrder(btn_add_new_data, cb_name_org);
        QWidget::setTabOrder(cb_name_org, btn_add_update_data);
        QWidget::setTabOrder(btn_add_update_data, cb_le_id_catridge);
        QWidget::setTabOrder(cb_le_id_catridge, le_id_catridge);
        QWidget::setTabOrder(le_id_catridge, update_txt_model_catridge);
        QWidget::setTabOrder(update_txt_model_catridge, le_sn_catridge);
        QWidget::setTabOrder(le_sn_catridge, update_data_remonta);
        QWidget::setTabOrder(update_data_remonta, update_txt_commentarii);
        QWidget::setTabOrder(update_txt_commentarii, update_txt_vip_rabot);
        QWidget::setTabOrder(update_txt_vip_rabot, update_txt_zhalobi);

        retranslateUi(w_add_values);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(w_add_values);
    } // setupUi

    void retranslateUi(QWidget *w_add_values)
    {
        w_add_values->setWindowTitle(QApplication::translate("w_add_values", "Form", nullptr));
        label->setText(QApplication::translate("w_add_values", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QApplication::translate("w_add_values", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_3->setText(QApplication::translate("w_add_values", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_4->setText(QApplication::translate("w_add_values", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_5->setText(QApplication::translate("w_add_values", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_6->setText(QApplication::translate("w_add_values", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        label_7->setText(QApplication::translate("w_add_values", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        btn_add_new_data->setText(QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_8->setText(QApplication::translate("w_add_values", "SN", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_9->setText(QApplication::translate("w_add_values", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        btn_add_update_data->setText(QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_10->setText(QApplication::translate("w_add_values", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_11->setText(QApplication::translate("w_add_values", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_12->setText(QApplication::translate("w_add_values", "SN \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_13->setText(QApplication::translate("w_add_values", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_14->setText(QApplication::translate("w_add_values", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        label_15->setText(QApplication::translate("w_add_values", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        label_16->setText(QApplication::translate("w_add_values", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \321\201 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265\320\274 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_add_values: public Ui_w_add_values {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_ADD_VALUES_H
