#include "productmodel.h"



ProductModel::ProductModel(QObject* parent)
    : QAbstractTableModel(parent) {
}

int ProductModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return m_products.size();
}

int ProductModel::columnCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    // Two columns: Name and Price
    return 2;
}

QVariant ProductModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || index.row() < 0 || index.row() >= m_products.size())
        return QVariant();

    const Product &product = m_products.at(index.row());

    if (role == Qt::DisplayRole) {
        switch (index.column()) {
        case 0:
            return product.name;
        case 1:
            return QString::number(product.price, 'f', 2);
        }
    }
    return QVariant();
}

QVariant ProductModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("Name");
        case 1:
            return tr("Price");
        }
    }
    return QVariant();
}

Qt::ItemFlags ProductModel::flags(const QModelIndex &index) const {
    if (!index.isValid())
        return Qt::NoItemFlags;
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

void ProductModel::addProduct(const Product &product) {
    beginInsertRows(QModelIndex(), m_products.size(), m_products.size());
    m_products.append(product);
    endInsertRows();
}

void ProductModel::clear() {
    beginResetModel();
    m_products.clear();
    endResetModel();
}

Product ProductModel::productAt(int row) const {
    if (row >= 0 && row < m_products.size())
        return m_products.at(row);
    return Product();
}
