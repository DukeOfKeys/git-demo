#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnComputeGcd_clicked()
{
    ui->labelResultGcd->setText("Result: " + QString::number(engine.gcd(ui->edit_a_gcd->text().toInt(), ui->edit_b_gcd->text().toInt())));
}


void MainWindow::on_btnCheckPrime_clicked()
{
    ui->labelResultPrime->setText(QString("Result: ") +  (engine.isPrime(ui->edit_n_prime->text().toInt()) ? QString("is prime") : QString("is not prime")) );
}


void MainWindow::on_btnFindArmstrong_clicked()
{
    auto numbers = engine.findArmstrongNumbersV(ui->edit_start_arm->text().toInt(), ui->edit_end_arm->text().toInt());
    if(numbers.empty())
    ui->textResultArmstrong->setText("no amrstrong numbers");
    else{
        QString new_text = "";
        for(auto el : numbers)
            new_text += QString::number(el) + " ";
        ui->textResultArmstrong->setText(new_text);
    }
}


void MainWindow::on_btnSolveQuad_clicked()
{
    tuple<int, double, double> result = engine.solveQuadratic(ui->edit_a_quad->text().toInt(),ui->edit_b_quad->text().toInt(),ui->edit_c_quad->text().toInt());
    ui->labelResultQuad->setText(QString::number(get<0>(result)) + " "+QString::number(get<1>(result)) + " "+QString::number(get<2>(result)));
}

