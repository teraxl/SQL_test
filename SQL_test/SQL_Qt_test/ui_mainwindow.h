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
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect_Database;
    QAction *actionExit;
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *l_name_organization;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *l_id;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QLabel *l_model_catridga;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QLabel *l_sn;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *l_data_remonta;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *l_data_vozvrata;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *l_vipolnennie_raboti;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLabel *l_comment;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QLabel *l_zhalobi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLabel *l_sostoyanie_doc;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_add_value;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_edit_values;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(943, 702);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionConnect_Database = new QAction(MainWindow);
        actionConnect_Database->setObjectName(QString::fromUtf8("actionConnect_Database"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);
        treeWidget->setMinimumSize(QSize(190, 432));
        treeWidget->setMaximumSize(QSize(190, 432));
        treeWidget->setBaseSize(QSize(190, 432));
        treeWidget->setFrameShape(QFrame::WinPanel);
        treeWidget->setFrameShadow(QFrame::Plain);

        horizontalLayout_4->addWidget(treeWidget);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(710, 450));
        groupBox->setMaximumSize(QSize(710, 450));
        groupBox->setSizeIncrement(QSize(710, 450));
        groupBox->setBaseSize(QSize(710, 450));
        groupBox->setContextMenuPolicy(Qt::NoContextMenu);
        groupBox->setAutoFillBackground(false);
        groupBox->setTitle(QString::fromUtf8("\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_13 = new QVBoxLayout(groupBox);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 5, 5, 5);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(5, 5, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        l_name_organization = new QLabel(groupBox);
        l_name_organization->setObjectName(QString::fromUtf8("l_name_organization"));
        l_name_organization->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(l_name_organization);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        l_id = new QLabel(groupBox);
        l_id->setObjectName(QString::fromUtf8("l_id"));
        l_id->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(l_id);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_7->addWidget(label_2);

        l_model_catridga = new QLabel(groupBox);
        l_model_catridga->setObjectName(QString::fromUtf8("l_model_catridga"));
        l_model_catridga->setFrameShape(QFrame::Box);

        verticalLayout_7->addWidget(l_model_catridga);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_8->addWidget(label_3);

        l_sn = new QLabel(groupBox);
        l_sn->setObjectName(QString::fromUtf8("l_sn"));
        l_sn->setFrameShape(QFrame::Box);

        verticalLayout_8->addWidget(l_sn);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label_7);

        l_data_remonta = new QLabel(groupBox);
        l_data_remonta->setObjectName(QString::fromUtf8("l_data_remonta"));
        l_data_remonta->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(l_data_remonta);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(label_8);

        l_data_vozvrata = new QLabel(groupBox);
        l_data_vozvrata->setObjectName(QString::fromUtf8("l_data_vozvrata"));
        l_data_vozvrata->setFrameShape(QFrame::Box);

        verticalLayout_6->addWidget(l_data_vozvrata);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);

        verticalLayout_10->addLayout(verticalLayout_6);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 1);
        verticalLayout_10->setStretch(2, 1);
        verticalLayout_10->setStretch(3, 1);
        verticalLayout_10->setStretch(4, 1);
        verticalLayout_10->setStretch(5, 1);

        horizontalLayout->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_5);

        l_vipolnennie_raboti = new QLabel(groupBox);
        l_vipolnennie_raboti->setObjectName(QString::fromUtf8("l_vipolnennie_raboti"));
        l_vipolnennie_raboti->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(l_vipolnennie_raboti);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout_11->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_6);

        l_comment = new QLabel(groupBox);
        l_comment->setObjectName(QString::fromUtf8("l_comment"));
        l_comment->setFrameShape(QFrame::Box);

        verticalLayout_5->addWidget(l_comment);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);

        verticalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, 5, 5, 5);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout_9->addWidget(label_10);

        l_zhalobi = new QLabel(groupBox);
        l_zhalobi->setObjectName(QString::fromUtf8("l_zhalobi"));
        l_zhalobi->setFrameShape(QFrame::Box);

        verticalLayout_9->addWidget(l_zhalobi);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 1);

        verticalLayout_11->addLayout(verticalLayout_9);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 1);
        verticalLayout_11->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_11);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_12->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_9);

        l_sostoyanie_doc = new QLabel(groupBox);
        l_sostoyanie_doc->setObjectName(QString::fromUtf8("l_sostoyanie_doc"));
        l_sostoyanie_doc->setMinimumSize(QSize(50, 50));
        l_sostoyanie_doc->setMaximumSize(QSize(50, 50));
        l_sostoyanie_doc->setBaseSize(QSize(100, 100));
        QFont font;
        font.setKerning(true);
        l_sostoyanie_doc->setFont(font);
        l_sostoyanie_doc->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(l_sostoyanie_doc);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        btn_add_value = new QPushButton(groupBox);
        btn_add_value->setObjectName(QString::fromUtf8("btn_add_value"));

        horizontalLayout_2->addWidget(btn_add_value);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_edit_values = new QPushButton(groupBox);
        btn_edit_values->setObjectName(QString::fromUtf8("btn_edit_values"));

        horizontalLayout_2->addWidget(btn_edit_values);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_12->addLayout(horizontalLayout_2);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 1);
        verticalLayout_12->setStretch(2, 1);

        verticalLayout_13->addLayout(verticalLayout_12);


        horizontalLayout_4->addWidget(groupBox);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_14->addLayout(horizontalLayout_4);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setMinimumSize(QSize(900, 150));
        tableView->setMaximumSize(QSize(913, 150));
        tableView->setSizeIncrement(QSize(900, 150));
        tableView->setBaseSize(QSize(900, 150));

        verticalLayout_14->addWidget(tableView);

        verticalLayout_14->setStretch(0, 1);
        verticalLayout_14->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_14, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menu->menuAction());
        menuMenu->addAction(actionConnect_Database);
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
        action->setText(QApplication::translate("MainWindow", "\320\236\320\261 \320\220\320\262\321\202\320\276\321\200\320\265", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        l_name_organization->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "ID \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        l_id->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        l_model_catridga->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "SN \320\272\320\260\321\202\321\200\320\270\320\264\320\266\320\260", nullptr));
        l_sn->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        l_data_remonta->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260", nullptr));
        l_data_vozvrata->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\321\213\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        l_vipolnennie_raboti->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        l_comment->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\320\226\320\260\320\273\320\276\320\261\321\213 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        l_zhalobi->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
        l_sostoyanie_doc->setText(QString());
        btn_add_value->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        btn_edit_values->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
