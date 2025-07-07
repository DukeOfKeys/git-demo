#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "num.h"
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
    Num engine;
private slots:
    void on_btnComputeGcd_clicked();

    void on_btnCheckPrime_clicked();

    void on_btnFindArmstrong_clicked();

    void on_btnSolveQuad_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
