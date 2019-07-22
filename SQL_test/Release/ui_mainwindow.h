/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect_Database;
    QAction *actionExit;
    QAction *actionShowWorkSheet;
    QAction *action;
    QWidget *centralWidget;
    QTableView *tableView;
    QTreeView *treeView;
    QGroupBox *groupBox;
    QPushButton *btn_add_value;
    QPushButton *btn_edit_values;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *l_name_organization;
    QLabel *label_4;
    QLabel *l_id;
    QLabel *label_2;
    QLabel *l_model_catridga;
    QLabel *label_3;
    QLabel *l_sn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *l_vipolnennie_raboti;
    QLabel *label_6;
    QLabel *l_comment;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *l_data_remonta;
    QLabel *label_8;
    QLabel *l_data_vozvrata;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QLabel *l_zhalobi;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *l_sostoyanie_doc;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1111, 758);
        actionConnect_Database = new QAction(MainWindow);
        actionConnect_Database->setObjectName(QString::fromUtf8("actionConnect_Database"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionShowWorkSheet = new QAction(MainWindow);
        actionShowWorkSheet->setObjectName(QString::fromUtf8("actionShowWorkSheet"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 510, 1091, 191));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 10, 191, 491));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 10, 891, 491));
        btn_add_value = new QPushButton(groupBox);
        btn_add_value->setObjectName(QString::fromUtf8("btn_add_value"));
        btn_add_value->setGeometry(QRect(20, 460, 121, 21));
        btn_edit_values = new QPushButton(groupBox);
        btn_edit_values->setObjectName(QString::fromUtf8("btn_edit_values"));
        btn_edit_values->setGeometry(QRect(149, 460, 141, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 711, 371));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        l_name_organization = new QLabel(layoutWidget);
        l_name_organization->setObjectName(QString::fromUtf8("l_name_organization"));
        l_name_organization->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(l_name_organization);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        l_id = new QLabel(layoutWidget);
        l_id->setObjectName(QString::fromUtf8("l_id"));
        l_id->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(l_id);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        l_model_catridga = new QLabel(layoutWidget);
        l_model_catridga->setObjectName(QString::fromUtf8("l_model_catridga"));
        l_model_catridga->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(l_model_catridga);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        l_sn = new QLabel(layoutWidget);
        l_sn->setObjectName(QString::fromUtf8("l_sn"));
        l_sn->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(l_sn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_5);

        l_vipolnennie_raboti = new QLabel(layoutWidget);
        l_vipolnennie_raboti->setObjectName(QString::fromUtf8("l_vipolnennie_raboti"));
        l_vipolnennie_raboti->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(l_vipolnennie_raboti);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_6);

        l_comment = new QLabel(layoutWidget);
        l_comment->setObjectName(QString::fromUtf8("l_comment"));
        l_comment->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(l_comment);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label_7);

        l_data_remonta = new QLabel(layoutWidget);
        l_data_remonta->setObjectName(QString::fromUtf8("l_data_remonta"));
        l_data_remonta->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(l_data_remonta);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label_8);

        l_data_vozvrata = new QLabel(layoutWidget);
        l_data_vozvrata->setObjectName(QString::fromUtf8("l_data_vozvrata"));
        l_data_vozvrata->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(l_data_vozvrata);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(label_10);

        l_zhalobi = new QLabel(layoutWidget);
        l_zhalobi->setObjectName(QString::fromUtf8("l_zhalobi"));
        l_zhalobi->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(l_zhalobi);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(760, 40, 114, 371));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        l_sostoyanie_doc = new QLabel(layoutWidget1);
        l_sostoyanie_doc->setObjectName(QString::fromUtf8("l_sostoyanie_doc"));
        l_sostoyanie_doc->setMinimumSize(QSize(100, 100));
        l_sostoyanie_doc->setMaximumSize(QSize(100, 100));
        l_sostoyanie_doc->setBaseSize(QSize(100, 100));
        QFont font;
        font.setKerning(true);
        l_sostoyanie_doc->setFont(font);
        l_sostoyanie_doc->setFrameShape(QFrame::NoFrame);

        verticalLayout_6->addWidget(l_sostoyanie_doc);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(label_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_6->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1111, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menu->menuAction());
        menuMenu->addAction(actionConnect_Database);
        menuMenu->addAction(actionShowWorkSheet);
        menuMenu->addAction(actionExit);
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect_Database->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\221\320\224", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        actionShowWorkSheet->setText(QApplication::translate("MainWindow", "ShowWorkSheet", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\236\320\261 \320\220\320\262\321\202\320\276\321\200\320\265", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        btn_add_value->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        btn_edit_values->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        l_name_organization->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        l_id->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        l_model_catridga->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        l_sn->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        l_vipolnennie_raboti->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        l_comment->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        l_data_remonta->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260", nullptr));
        l_data_vozvrata->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        l_zhalobi->setText(QString());
        l_sostoyanie_doc->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
