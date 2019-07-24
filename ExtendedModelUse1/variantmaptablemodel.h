#ifndef VARIANTMAPTABLEMODEL_H
#define VARIANTMAPTABLEMODEL_H

#include <QAbstractTableModel>
#include <QObject>

class AbstractColumn : public QObject
{
public:
    AbstractColumn(QString name);
    QString name() {return _name;}
    virtual QVariant colData(const QVariantMap &rowData, int role = Qt::DisplayRole) = 0;
private:
    QString _name;
};

//Default column implementation
class SimpleColumn : public AbstractColumn
{
public:
    SimpleColumn(QString name);

    // AbstractColumn interface
public:
    virtual QVariant colData(const QVariantMap &rowData, int role) override;
};

// Добавление класса для обединения данных столбцов
class FullNameColumn : public AbstractColumn
{
public:
    FullNameColumn(QString name);

    // AbstractColumn interface
public:
    virtual QVariant colData(const QVariantMap &rowData, int role) override;
};


class VariantMapTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    VariantMapTableModel(QObject *parent = nullptr);
    void registerColumn(AbstractColumn* column);
    void addRow(QVariantMap rowData);

    // Convenience method
    int idByRow(int row) const;
    int rowById(int id) const;
    int colByName(QString name) const;
    QString nameByCol(int col) const;
private:
    //Storing data members
    QList<int> _rowIndex;
    QHash<int, QVariantMap> _dataHash;
    QList<AbstractColumn*> _columns;

    // QAbstractItemModel interface
public:
    virtual int rowCount(const QModelIndex &parent) const override;
    virtual int columnCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;

    // QAbstractItemModel interface
public:
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    virtual Qt::ItemFlags flags(const QModelIndex &index) const override;

    // QAbstractItemModel interface
public:
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
};

//Lookup column
class LookUpColumn : public AbstractColumn
{
public:
    LookUpColumn(QString name,
                 VariantMapTableModel* model,
                 QString keyCol,
                 QString lookupCol);
protected:
    VariantMapTableModel* _lookupModel;
    QString _keyColumn;
    QString _lookupColumn;
    // AbstractColumn interface
public:
    virtual QVariant colData(const QVariantMap &rowData, int role) override;
};

#endif // VARIANTMAPTABLEMODEL_H
