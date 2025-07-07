#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Настройка модели и прокси-модели
    m_productModel = new ProductModel(this);
    m_proxyModel = new QSortFilterProxyModel(this);
    m_proxyModel->setSourceModel(m_productModel);
    m_proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    m_proxyModel->setFilterKeyColumn(-1);

    // Привязка к таблице
    ui->tableView->setModel(m_proxyModel);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // Валидатор для поля цены
    auto *validator = new QDoubleValidator(0.0, 1e6, 2, this);
    ui->priceEdit->setValidator(validator);

    // Пример данных (можно убрать или перенести)
    m_productModel->addProduct({"Apple", 1.20});
    m_productModel->addProduct({"Banana", 0.80});
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_searchEdit_textChanged(const QString &text)
{
    m_proxyModel->setFilterWildcard(text);
}

void MainWindow::on_addButton_clicked()
{
    const QString name = ui->nameEdit->text().trimmed();
    const QString priceStr = ui->priceEdit->text().trimmed();
    if (name.isEmpty() || priceStr.isEmpty()) {
        return;
    }
    const double price = priceStr.toDouble();
    m_productModel->addProduct({name, price});
    ui->nameEdit->clear();
    ui->priceEdit->clear();
}




