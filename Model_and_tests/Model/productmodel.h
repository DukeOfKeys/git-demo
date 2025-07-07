#ifndef PRODUCTMODEL_H
#define PRODUCTMODEL_H

#include <QAbstractTableModel>
#include <QString>
#include <QVector>

struct Product {
    QString name;
    double price;
};

class ProductModel : public QAbstractTableModel {
    Q_OBJECT

public:
    explicit ProductModel(QObject* parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;

    void addProduct(const Product &product);
    void clear();
    Product productAt(int row) const;

private:
    QVector<Product> m_products;
};

#endif
