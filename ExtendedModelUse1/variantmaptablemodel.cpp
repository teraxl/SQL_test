#include "variantmaptablemodel.h"
#include <QtDebug>

VariantMapTableModel::VariantMapTableModel(QObject *parent)
    : QAbstractTableModel (parent)
{

}

void VariantMapTableModel::registerColumn(AbstractColumn *column)
{
    _columns.append(column);
}

void VariantMapTableModel::addRow(QVariantMap rowData)
{
    int id = rowData.value("id").toInt();
    beginInsertRows(QModelIndex(), _rowIndex.count(), _rowIndex.count());
        _rowIndex.append(id);
        _dataHash.insert(id, rowData);
    endInsertRows();
}

int VariantMapTableModel::idByRow(int row) const
{
    return _rowIndex.at(row);
}

int VariantMapTableModel::rowById(int id) const
{
    return _dataHash.value(id).value("id").toInt() - 1;
}

int VariantMapTableModel::colByName(QString name) const
{
    for (int col = 0; col < _columns.count(); col++) {
        if (nameByCol(col) == name) {
            return col;
        }
    }
    return -1;
}

QString VariantMapTableModel::nameByCol(int col) const
{
    return _columns.at(col)->name();
}

int VariantMapTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _rowIndex.count();
}

int VariantMapTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _columns.count();
}

QVariant VariantMapTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    } else {
        int id = idByRow(index.row());
        QVariantMap rowData = _dataHash.value(id);
        return _columns.at(index.column())->colData(rowData, role);
    }
}

bool VariantMapTableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid()) {
        return false;
    }
    if (role == Qt::EditRole) {
        int id = idByRow(index.row());
        _dataHash[id].insert(nameByCol(index.column()), value);
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

Qt::ItemFlags VariantMapTableModel::flags(const QModelIndex &index) const
{
    if (!index.isValid()) {
        return Qt::NoItemFlags;
    } else {
        return  Qt::ItemIsEnabled |
                Qt::ItemIsSelectable |
                Qt::ItemIsEditable;
    }
}

QVariant VariantMapTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        return _dataHash.value(section).key(_dataHash.key(_dataHash.value(section)));
    }
    return QVariant();
}

SimpleColumn::SimpleColumn(QString name)
    : AbstractColumn (name)
{

}

QVariant SimpleColumn::colData(const QVariantMap &rowData, int role)
{
    if (role != Qt::DisplayRole)
        return QVariant();
    return rowData.value(name());
}

AbstractColumn::AbstractColumn(QString name)
    : _name(name) {}

FullNameColumn::FullNameColumn(QString name)
    : AbstractColumn (name) {}

QVariant FullNameColumn::colData(const QVariantMap &rowData, int role)
{
    if (role != Qt::DisplayRole)
        return QVariant();
    return rowData.value("firstname").toString() +
            " " + rowData.value("lastname").toString();
}

LookUpColumn::LookUpColumn(QString name,
                           VariantMapTableModel *model,
                           QString keyCol,
                           QString lookupCol)
    : AbstractColumn (name),
      _lookupModel(model),
      _keyColumn(keyCol),
      _lookupColumn(lookupCol)
{

}

QVariant LookUpColumn::colData(const QVariantMap &rowData, int role)
{
    if (role == Qt::DisplayRole) {
        int key = rowData.value(_keyColumn).toInt();
        qDebug() << "key: " << key;
        int lookupRow = _lookupModel->rowById(key);
        qDebug() << "lookupRow: " << lookupRow;
        if (lookupRow < 0)
            return  QVariant();
        int lookupCol = _lookupModel->colByName(_lookupColumn);
        qDebug() << "lookupCol: " << lookupCol;
        return _lookupModel->index(lookupRow, lookupCol).data();
    }
    return QVariant();
}
