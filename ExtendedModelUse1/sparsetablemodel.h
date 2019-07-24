#ifndef SPARSETABLEMODEL_H
#define SPARSETABLEMODEL_H

#include <QAbstractTableModel>
#include <QObject>

//Базовый класс модели разреженной таблицы с хранением данных в виде списка заполненных значений
class SparseTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    SparseTableModel(int rows, int cols, QObject *parent = nullptr);
private:
	//Размеры таблицы задаются в конструкторе и фиксированы
    int _rowCount = 0;
    int _colCount = 0;
protected:
	//Объект для хранения данных модели (только заполненных ячеек)
    QHash<QModelIndex, QVariant> _cellData;
    // QAbstractItemModel interface
public:
    virtual int rowCount(const QModelIndex &parent) const override;
    virtual int columnCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    virtual Qt::ItemFlags flags(const QModelIndex &index) const override;
};

//Модель для редактирования/оображения данных расписания занятий
class LessonScheduleModel : public SparseTableModel
{
    Q_OBJECT
public:
    LessonScheduleModel(int rows, QObject *parent = nullptr);
	//метод для удобной инциализации модели данными
    void setLesson(int lessonNum, int dayOfWeek, QString course);

    // QAbstractItemModel interface
public:
	//метод для отображения заголовков таблицы (Дни недели, Номер занятия)
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
};

#endif // SPARSETABLEMODEL_H
