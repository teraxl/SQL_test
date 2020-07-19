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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_add_values
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *twAddData;
    QWidget *tabWidgetAddData;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_name_org;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_id_catridge;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_model_catridge;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLineEdit *txt_sn;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QTextEdit *txt_vip_rabot;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QTextEdit *txt_zhalobi;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QTextEdit *txt_commentarii;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add_new_data;
    QLabel *label_7;
    QDateEdit *data_remonta;
    QWidget *tabWidgetModify;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QComboBox *cb_name_org;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_10;
    QComboBox *le_id_catridge;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_11;
    QLineEdit *update_txt_model_catridge;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_12;
    QLineEdit *le_sn_catridge;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_16;
    QTextEdit *update_txt_vip_rabot;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_13;
    QTextEdit *update_txt_zhalobi;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_14;
    QTextEdit *update_txt_commentarii;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_add_update_data;
    QLabel *label_15;
    QDateEdit *update_data_remonta;

    void setupUi(QWidget *w_add_values)
    {
        if (w_add_values->objectName().isEmpty())
            w_add_values->setObjectName(QString::fromUtf8("w_add_values"));
        w_add_values->resize(649, 466);
        gridLayout_3 = new QGridLayout(w_add_values);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        twAddData = new QTabWidget(w_add_values);
        twAddData->setObjectName(QString::fromUtf8("twAddData"));
        tabWidgetAddData = new QWidget();
        tabWidgetAddData->setObjectName(QString::fromUtf8("tabWidgetAddData"));
        gridLayout = new QGridLayout(tabWidgetAddData);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(tabWidgetAddData);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        txt_name_org = new QLineEdit(tabWidgetAddData);
        txt_name_org->setObjectName(QString::fromUtf8("txt_name_org"));
        txt_name_org->setText(QString::fromUtf8(""));
        txt_name_org->setFrame(true);
        txt_name_org->setPlaceholderText(QString::fromUtf8(""));
        txt_name_org->setClearButtonEnabled(true);

        verticalLayout->addWidget(txt_name_org);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(tabWidgetAddData);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_id_catridge = new QLineEdit(tabWidgetAddData);
        txt_id_catridge->setObjectName(QString::fromUtf8("txt_id_catridge"));

        verticalLayout_2->addWidget(txt_id_catridge);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_3 = new QLabel(tabWidgetAddData);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_model_catridge = new QLineEdit(tabWidgetAddData);
        txt_model_catridge->setObjectName(QString::fromUtf8("txt_model_catridge"));

        verticalLayout_3->addWidget(txt_model_catridge);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        label_8 = new QLabel(tabWidgetAddData);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        txt_sn = new QLineEdit(tabWidgetAddData);
        txt_sn->setObjectName(QString::fromUtf8("txt_sn"));

        verticalLayout_4->addWidget(txt_sn);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 1);

        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, 5, 5, 5);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(tabWidgetAddData);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        txt_vip_rabot = new QTextEdit(tabWidgetAddData);
        txt_vip_rabot->setObjectName(QString::fromUtf8("txt_vip_rabot"));

        verticalLayout_6->addWidget(txt_vip_rabot);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        label_5 = new QLabel(tabWidgetAddData);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_7->addWidget(label_5);

        txt_zhalobi = new QTextEdit(tabWidgetAddData);
        txt_zhalobi->setObjectName(QString::fromUtf8("txt_zhalobi"));

        verticalLayout_7->addWidget(txt_zhalobi);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        label_6 = new QLabel(tabWidgetAddData);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_8->addWidget(label_6);

        txt_commentarii = new QTextEdit(tabWidgetAddData);
        txt_commentarii->setObjectName(QString::fromUtf8("txt_commentarii"));
        txt_commentarii->setInputMethodHints(Qt::ImhMultiLine);

        verticalLayout_8->addWidget(txt_commentarii);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 1);
        verticalLayout_9->setStretch(2, 1);

        horizontalLayout_2->addLayout(verticalLayout_9);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_10->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        btn_add_new_data = new QPushButton(tabWidgetAddData);
        btn_add_new_data->setObjectName(QString::fromUtf8("btn_add_new_data"));

        horizontalLayout->addWidget(btn_add_new_data);

        label_7 = new QLabel(tabWidgetAddData);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setInputMethodHints(Qt::ImhNone);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        data_remonta = new QDateEdit(tabWidgetAddData);
        data_remonta->setObjectName(QString::fromUtf8("data_remonta"));

        horizontalLayout->addWidget(data_remonta);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_10->addLayout(horizontalLayout);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);

        twAddData->addTab(tabWidgetAddData, QString());
        tabWidgetModify = new QWidget();
        tabWidgetModify->setObjectName(QString::fromUtf8("tabWidgetModify"));
        gridLayout_2 = new QGridLayout(tabWidgetModify);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(5);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(5, 5, 5, 5);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 5, 5, 5);
        label_9 = new QLabel(tabWidgetModify);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(178, 22));

        verticalLayout_11->addWidget(label_9);

        cb_name_org = new QComboBox(tabWidgetModify);
        cb_name_org->setObjectName(QString::fromUtf8("cb_name_org"));
        cb_name_org->setMaximumSize(QSize(178, 22));

        verticalLayout_11->addWidget(cb_name_org);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 1);

        verticalLayout_15->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(5, 5, 5, 5);
        label_10 = new QLabel(tabWidgetModify);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(175, 17));
        label_10->setSizeIncrement(QSize(175, 17));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setWordWrap(false);

        verticalLayout_12->addWidget(label_10);

        le_id_catridge = new QComboBox(tabWidgetModify);
        le_id_catridge->setObjectName(QString::fromUtf8("le_id_catridge"));
        le_id_catridge->setMaximumSize(QSize(178, 22));

        verticalLayout_12->addWidget(le_id_catridge);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 1);

        verticalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 5, 5, 5);
        label_11 = new QLabel(tabWidgetModify);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_13->addWidget(label_11);

        update_txt_model_catridge = new QLineEdit(tabWidgetModify);
        update_txt_model_catridge->setObjectName(QString::fromUtf8("update_txt_model_catridge"));
        update_txt_model_catridge->setFrame(true);

        verticalLayout_13->addWidget(update_txt_model_catridge);

        verticalLayout_13->setStretch(0, 1);
        verticalLayout_13->setStretch(1, 1);

        verticalLayout_15->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(5, 5, 5, 5);
        label_12 = new QLabel(tabWidgetModify);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_14->addWidget(label_12);

        le_sn_catridge = new QLineEdit(tabWidgetModify);
        le_sn_catridge->setObjectName(QString::fromUtf8("le_sn_catridge"));
        le_sn_catridge->setFrame(true);

        verticalLayout_14->addWidget(le_sn_catridge);

        verticalLayout_14->setStretch(0, 1);
        verticalLayout_14->setStretch(1, 1);

        verticalLayout_15->addLayout(verticalLayout_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer);

        verticalLayout_15->setStretch(0, 1);
        verticalLayout_15->setStretch(1, 1);
        verticalLayout_15->setStretch(2, 1);
        verticalLayout_15->setStretch(3, 1);
        verticalLayout_15->setStretch(4, 1);

        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(5);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(5, 5, 5, 5);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(5, 5, 5, 5);
        label_16 = new QLabel(tabWidgetModify);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_16->addWidget(label_16);

        update_txt_vip_rabot = new QTextEdit(tabWidgetModify);
        update_txt_vip_rabot->setObjectName(QString::fromUtf8("update_txt_vip_rabot"));

        verticalLayout_16->addWidget(update_txt_vip_rabot);

        verticalLayout_16->setStretch(0, 1);
        verticalLayout_16->setStretch(1, 1);

        verticalLayout_19->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(5);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 5, 5, 5);
        label_13 = new QLabel(tabWidgetModify);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_17->addWidget(label_13);

        update_txt_zhalobi = new QTextEdit(tabWidgetModify);
        update_txt_zhalobi->setObjectName(QString::fromUtf8("update_txt_zhalobi"));

        verticalLayout_17->addWidget(update_txt_zhalobi);

        verticalLayout_17->setStretch(0, 1);
        verticalLayout_17->setStretch(1, 1);

        verticalLayout_19->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(5);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(5, 5, 5, 5);
        label_14 = new QLabel(tabWidgetModify);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_18->addWidget(label_14);

        update_txt_commentarii = new QTextEdit(tabWidgetModify);
        update_txt_commentarii->setObjectName(QString::fromUtf8("update_txt_commentarii"));

        verticalLayout_18->addWidget(update_txt_commentarii);

        verticalLayout_18->setStretch(0, 1);
        verticalLayout_18->setStretch(1, 1);

        verticalLayout_19->addLayout(verticalLayout_18);

        verticalLayout_19->setStretch(0, 1);
        verticalLayout_19->setStretch(1, 1);
        verticalLayout_19->setStretch(2, 1);

        horizontalLayout_5->addLayout(verticalLayout_19);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_20->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        btn_add_update_data = new QPushButton(tabWidgetModify);
        btn_add_update_data->setObjectName(QString::fromUtf8("btn_add_update_data"));

        horizontalLayout_4->addWidget(btn_add_update_data);

        label_15 = new QLabel(tabWidgetModify);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_15);

        update_data_remonta = new QDateEdit(tabWidgetModify);
        update_data_remonta->setObjectName(QString::fromUtf8("update_data_remonta"));

        horizontalLayout_4->addWidget(update_data_remonta);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_20->addLayout(horizontalLayout_4);

        verticalLayout_20->setStretch(0, 1);
        verticalLayout_20->setStretch(2, 1);

        gridLayout_2->addLayout(verticalLayout_20, 0, 0, 1, 1);

        twAddData->addTab(tabWidgetModify, QString());

        gridLayout_3->addWidget(twAddData, 0, 0, 1, 1);

        QWidget::setTabOrder(txt_name_org, txt_id_catridge);
        QWidget::setTabOrder(txt_id_catridge, txt_model_catridge);
        QWidget::setTabOrder(txt_model_catridge, txt_sn);
        QWidget::setTabOrder(txt_sn, txt_vip_rabot);
        QWidget::setTabOrder(txt_vip_rabot, txt_zhalobi);
        QWidget::setTabOrder(txt_zhalobi, txt_commentarii);
        QWidget::setTabOrder(txt_commentarii, data_remonta);
        QWidget::setTabOrder(data_remonta, btn_add_new_data);
        QWidget::setTabOrder(btn_add_new_data, cb_name_org);
        QWidget::setTabOrder(cb_name_org, btn_add_update_data);
        QWidget::setTabOrder(btn_add_update_data, le_id_catridge);
        QWidget::setTabOrder(le_id_catridge, update_txt_model_catridge);
        QWidget::setTabOrder(update_txt_model_catridge, le_sn_catridge);
        QWidget::setTabOrder(le_sn_catridge, update_data_remonta);
        QWidget::setTabOrder(update_data_remonta, update_txt_commentarii);
        QWidget::setTabOrder(update_txt_commentarii, update_txt_vip_rabot);
        QWidget::setTabOrder(update_txt_vip_rabot, update_txt_zhalobi);

        retranslateUi(w_add_values);

        twAddData->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(w_add_values);
    } // setupUi

    void retranslateUi(QWidget *w_add_values)
    {
        w_add_values->setWindowTitle(QApplication::translate("w_add_values", "Form", nullptr));
        label->setText(QApplication::translate("w_add_values", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QApplication::translate("w_add_values", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_3->setText(QApplication::translate("w_add_values", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_8->setText(QApplication::translate("w_add_values", "SN \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_4->setText(QApplication::translate("w_add_values", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_5->setText(QApplication::translate("w_add_values", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_6->setText(QApplication::translate("w_add_values", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        btn_add_new_data->setText(QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_7->setText(QApplication::translate("w_add_values", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\270\321\205\320\276\320\264\320\260", nullptr));
        twAddData->setTabText(twAddData->indexOf(tabWidgetAddData), QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_9->setText(QApplication::translate("w_add_values", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_10->setText(QApplication::translate("w_add_values", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_11->setText(QApplication::translate("w_add_values", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_12->setText(QApplication::translate("w_add_values", "SN \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        label_16->setText(QApplication::translate("w_add_values", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_13->setText(QApplication::translate("w_add_values", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_14->setText(QApplication::translate("w_add_values", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        btn_add_update_data->setText(QApplication::translate("w_add_values", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_15->setText(QApplication::translate("w_add_values", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        twAddData->setTabText(twAddData->indexOf(tabWidgetModify), QApplication::translate("w_add_values", "\320\240\320\265\320\274\320\276\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_add_values: public Ui_w_add_values {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_ADD_VALUES_H
