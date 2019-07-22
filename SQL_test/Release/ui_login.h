/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(283, 362);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 9, 0, 1, 1);

        lineEdit_3 = new QLineEdit(Login);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 5, 0, 1, 1);

        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(Login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(Login);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 7, 0, 1, 1);

        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 3, 0, 1, 1);

        label_4 = new QLabel(Login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", nullptr));
        pushButton->setText(QApplication::translate("Login", "Connect to DB", nullptr));
        label->setText(QApplication::translate("Login", "Adress server DB", nullptr));
        label_2->setText(QApplication::translate("Login", "DB Name", nullptr));
        label_3->setText(QApplication::translate("Login", "Login", nullptr));
        label_4->setText(QApplication::translate("Login", "Pasword", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
