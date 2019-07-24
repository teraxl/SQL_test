#include "sparsetablemodel.h"

#include <QLocale>

SparseTableModel::SparseTableModel(int rows, int cols, QObject *parent)
    : QAbstractTableModel(parent), _rowCount(rows), _colCount(cols)
{

}

int SparseTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _rowCount;
}

int SparseTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _colCount;
}

QVariant SparseTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        return _cellData.value(index, QVariant());
    }
    return QVariant();
}

bool SparseTableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid())
        return false;
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        _cellData.insert(index, value);
        emit dataChanged(index, index);
    }
    return false;
}

Qt::ItemFlags SparseTableModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
}

LessonScheduleModel::LessonScheduleModel(int rows, QObject *parent)
    : SparseTableModel(rows, 7, parent)
{

}

void LessonScheduleModel::setLesson(int lessonNum, int dayOfWeek, QString course)
{
    setData(index(lessonNum - 1, dayOfWeek - 1), course, Qt::EditRole);
}


QVariant LessonScheduleModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
		//Для отображения дней недели с системной локалью можно использовать пустой конструктор QLocale().standaloneDayName(section+1)
        return QLocale(QLocale::Russian).standaloneDayName(section + 1);
    }
    else {
        return QString(tr("Урок %1")).arg(section + 1);
    }
}
