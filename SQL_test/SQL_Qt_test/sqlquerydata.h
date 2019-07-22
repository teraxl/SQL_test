#ifndef SQLQUERYDATA_H
#define SQLQUERYDATA_H

#include <QObject>
#include <QSqlQuery>

class SqlQueryData : public QObject
{
    Q_OBJECT
public:
    SqlQueryData(QObject *parent = nullptr);

    SqlQueryData(QString &name_org,
                 QString &model_catridge,
                 QString &id_catridge,
                 QString &sn_catrifge,
                 QString &vip_rab,
                 QString &zhalobi_clienta,
                 QString &comments);

    void add_new_data();

private:
    QSqlQuery query;
    QString name_client;
    QString model;
    QString rtl_id;
    QString sn;
    QString vipolnennie_raboti;
    QString zhalobi_so_slov_clienta;
    QString komentarii;
    QString data_remonta;
    QString data_vozvrata;
    QString doc_is_ready;

signals:

public slots:
};

#endif // SQLQUERYDATA_H
