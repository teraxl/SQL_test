#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "sparsetablemodel.h"
#include "variantmaptablemodel.h"
#include <QDebug>
#include <QResizeEvent>
#include <QObject>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

//    LessonScheduleModel* model = new LessonScheduleModel(10, this);
//    model->setLesson(3, 2, "Java");
//    model->setLesson(1, 5, "Physics");

//    ui->tableView->setModel(model);
//    this->setFixedSize(788, 349);

    VariantMapTableModel* cityModel = new VariantMapTableModel(this);
    cityModel->registerColumn(new SimpleColumn("id"));
    cityModel->registerColumn(new SimpleColumn("name"));

    QVariantMap city2;
    QVariantMap city3;
    QVariantMap city4;
    QVariantMap city5;
    city2.insert("id", 1);
    city2.insert("name", "Timashevsk");
    city3.insert("id", 2);
    city3.insert("name", "Timk");
    city4.insert("id", 3);
    city4.insert("name", "Rostov");
    city5.insert("id", 4);
    city5.insert("name", "Каменск-Шахтинский");
    cityModel->addRow(city2);
    cityModel->addRow(city3);
    cityModel->addRow(city4);
    cityModel->addRow(city5);
    cityModel->headerData(0, Qt::Horizontal, Qt::DisplayRole);

    ui->tableView->setModel(cityModel);

    VariantMapTableModel *model = new VariantMapTableModel(this);

    model->registerColumn(new SimpleColumn("id"));
    model->registerColumn(new SimpleColumn("firstname"));
    model->registerColumn(new SimpleColumn("lastname"));
    model->registerColumn(new LookUpColumn("city", cityModel, "city_id", "name"));

    // Колонка с обьединенными данными
//    model->registerColumn(new FullNameColumn("FullNameColumn"));

    QVariantMap person;
    QVariantMap person1;
    QVariantMap person2;

    person.insert("id", 1);
    person.insert("firstname", "John");
    person.insert("lastname", "Doe");
    person.insert("city_id", 1);
    person1.insert("id", 2);
    person1.insert("firstname", "Alex");
    person1.insert("lastname", "Muga");
    person1.insert("city_id", 2);
    person2.insert("id", 3);
    person2.insert("firstname", "Вася");
    person2.insert("lastname", "Пупкин");
    person2.insert("city_id", 4);
    model->addRow(person);
    model->addRow(person1);
    model->addRow(person2);

    ui->tableView_2->setModel(model);

    connect(cityModel, SIGNAL(dataChanged(QModelIndex, QModelIndex, QVector<int>)),
            model, SIGNAL(modelReset()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

