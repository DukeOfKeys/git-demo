#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "productmodel.h"
#include <QMainWindow>
#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_searchEdit_textChanged(const QString &text);
    void on_addButton_clicked();

private:
    ProductModel *m_productModel;
    QSortFilterProxyModel *m_proxyModel;
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
