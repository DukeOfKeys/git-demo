/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabGcd;
    QFormLayout *formLayout_gcd;
    QLabel *label_a_gcd;
    QLineEdit *edit_a_gcd;
    QLabel *label_b_gcd;
    QLineEdit *edit_b_gcd;
    QPushButton *btnComputeGcd;
    QLabel *labelResultGcd;
    QWidget *tabPrime;
    QFormLayout *formLayout_prime;
    QLabel *label_n_prime;
    QLineEdit *edit_n_prime;
    QPushButton *btnCheckPrime;
    QLabel *labelResultPrime;
    QWidget *tabArmstrong;
    QFormLayout *formLayout_armstrong;
    QLabel *label_start_arm;
    QLineEdit *edit_start_arm;
    QLabel *label_end_arm;
    QLineEdit *edit_end_arm;
    QPushButton *btnFindArmstrong;
    QTextEdit *textResultArmstrong;
    QWidget *tabQuadratic;
    QFormLayout *formLayout_quad;
    QLabel *label_a_quad;
    QLineEdit *edit_a_quad;
    QLabel *label_b_quad;
    QLineEdit *edit_b_quad;
    QLabel *label_c_quad;
    QLineEdit *edit_c_quad;
    QPushButton *btnSolveQuad;
    QLabel *labelResultQuad;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabGcd = new QWidget();
        tabGcd->setObjectName("tabGcd");
        formLayout_gcd = new QFormLayout(tabGcd);
        formLayout_gcd->setObjectName("formLayout_gcd");
        label_a_gcd = new QLabel(tabGcd);
        label_a_gcd->setObjectName("label_a_gcd");

        formLayout_gcd->setWidget(0, QFormLayout::LabelRole, label_a_gcd);

        edit_a_gcd = new QLineEdit(tabGcd);
        edit_a_gcd->setObjectName("edit_a_gcd");

        formLayout_gcd->setWidget(0, QFormLayout::FieldRole, edit_a_gcd);

        label_b_gcd = new QLabel(tabGcd);
        label_b_gcd->setObjectName("label_b_gcd");

        formLayout_gcd->setWidget(1, QFormLayout::LabelRole, label_b_gcd);

        edit_b_gcd = new QLineEdit(tabGcd);
        edit_b_gcd->setObjectName("edit_b_gcd");

        formLayout_gcd->setWidget(1, QFormLayout::FieldRole, edit_b_gcd);

        btnComputeGcd = new QPushButton(tabGcd);
        btnComputeGcd->setObjectName("btnComputeGcd");

        formLayout_gcd->setWidget(2, QFormLayout::SpanningRole, btnComputeGcd);

        labelResultGcd = new QLabel(tabGcd);
        labelResultGcd->setObjectName("labelResultGcd");

        formLayout_gcd->setWidget(3, QFormLayout::SpanningRole, labelResultGcd);

        tabWidget->addTab(tabGcd, QString());
        tabPrime = new QWidget();
        tabPrime->setObjectName("tabPrime");
        formLayout_prime = new QFormLayout(tabPrime);
        formLayout_prime->setObjectName("formLayout_prime");
        label_n_prime = new QLabel(tabPrime);
        label_n_prime->setObjectName("label_n_prime");

        formLayout_prime->setWidget(0, QFormLayout::LabelRole, label_n_prime);

        edit_n_prime = new QLineEdit(tabPrime);
        edit_n_prime->setObjectName("edit_n_prime");

        formLayout_prime->setWidget(0, QFormLayout::FieldRole, edit_n_prime);

        btnCheckPrime = new QPushButton(tabPrime);
        btnCheckPrime->setObjectName("btnCheckPrime");

        formLayout_prime->setWidget(1, QFormLayout::SpanningRole, btnCheckPrime);

        labelResultPrime = new QLabel(tabPrime);
        labelResultPrime->setObjectName("labelResultPrime");

        formLayout_prime->setWidget(2, QFormLayout::SpanningRole, labelResultPrime);

        tabWidget->addTab(tabPrime, QString());
        tabArmstrong = new QWidget();
        tabArmstrong->setObjectName("tabArmstrong");
        formLayout_armstrong = new QFormLayout(tabArmstrong);
        formLayout_armstrong->setObjectName("formLayout_armstrong");
        label_start_arm = new QLabel(tabArmstrong);
        label_start_arm->setObjectName("label_start_arm");

        formLayout_armstrong->setWidget(0, QFormLayout::LabelRole, label_start_arm);

        edit_start_arm = new QLineEdit(tabArmstrong);
        edit_start_arm->setObjectName("edit_start_arm");

        formLayout_armstrong->setWidget(0, QFormLayout::FieldRole, edit_start_arm);

        label_end_arm = new QLabel(tabArmstrong);
        label_end_arm->setObjectName("label_end_arm");

        formLayout_armstrong->setWidget(1, QFormLayout::LabelRole, label_end_arm);

        edit_end_arm = new QLineEdit(tabArmstrong);
        edit_end_arm->setObjectName("edit_end_arm");

        formLayout_armstrong->setWidget(1, QFormLayout::FieldRole, edit_end_arm);

        btnFindArmstrong = new QPushButton(tabArmstrong);
        btnFindArmstrong->setObjectName("btnFindArmstrong");

        formLayout_armstrong->setWidget(2, QFormLayout::SpanningRole, btnFindArmstrong);

        textResultArmstrong = new QTextEdit(tabArmstrong);
        textResultArmstrong->setObjectName("textResultArmstrong");
        textResultArmstrong->setReadOnly(true);

        formLayout_armstrong->setWidget(3, QFormLayout::SpanningRole, textResultArmstrong);

        tabWidget->addTab(tabArmstrong, QString());
        tabQuadratic = new QWidget();
        tabQuadratic->setObjectName("tabQuadratic");
        formLayout_quad = new QFormLayout(tabQuadratic);
        formLayout_quad->setObjectName("formLayout_quad");
        label_a_quad = new QLabel(tabQuadratic);
        label_a_quad->setObjectName("label_a_quad");

        formLayout_quad->setWidget(0, QFormLayout::LabelRole, label_a_quad);

        edit_a_quad = new QLineEdit(tabQuadratic);
        edit_a_quad->setObjectName("edit_a_quad");

        formLayout_quad->setWidget(0, QFormLayout::FieldRole, edit_a_quad);

        label_b_quad = new QLabel(tabQuadratic);
        label_b_quad->setObjectName("label_b_quad");

        formLayout_quad->setWidget(1, QFormLayout::LabelRole, label_b_quad);

        edit_b_quad = new QLineEdit(tabQuadratic);
        edit_b_quad->setObjectName("edit_b_quad");

        formLayout_quad->setWidget(1, QFormLayout::FieldRole, edit_b_quad);

        label_c_quad = new QLabel(tabQuadratic);
        label_c_quad->setObjectName("label_c_quad");

        formLayout_quad->setWidget(2, QFormLayout::LabelRole, label_c_quad);

        edit_c_quad = new QLineEdit(tabQuadratic);
        edit_c_quad->setObjectName("edit_c_quad");

        formLayout_quad->setWidget(2, QFormLayout::FieldRole, edit_c_quad);

        btnSolveQuad = new QPushButton(tabQuadratic);
        btnSolveQuad->setObjectName("btnSolveQuad");

        formLayout_quad->setWidget(3, QFormLayout::SpanningRole, btnSolveQuad);

        labelResultQuad = new QLabel(tabQuadratic);
        labelResultQuad->setObjectName("labelResultQuad");

        formLayout_quad->setWidget(4, QFormLayout::SpanningRole, labelResultQuad);

        tabWidget->addTab(tabQuadratic, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Math Utilities", nullptr));
        label_a_gcd->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_b_gcd->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        btnComputeGcd->setText(QCoreApplication::translate("MainWindow", "Compute GCD", nullptr));
        labelResultGcd->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGcd), QCoreApplication::translate("MainWindow", "GCD", nullptr));
        label_n_prime->setText(QCoreApplication::translate("MainWindow", "n:", nullptr));
        btnCheckPrime->setText(QCoreApplication::translate("MainWindow", "Check Prime", nullptr));
        labelResultPrime->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPrime), QCoreApplication::translate("MainWindow", "Prime", nullptr));
        label_start_arm->setText(QCoreApplication::translate("MainWindow", "Start:", nullptr));
        label_end_arm->setText(QCoreApplication::translate("MainWindow", "End:", nullptr));
        btnFindArmstrong->setText(QCoreApplication::translate("MainWindow", "Find Armstrong", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabArmstrong), QCoreApplication::translate("MainWindow", "Armstrong", nullptr));
        label_a_quad->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_b_quad->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        label_c_quad->setText(QCoreApplication::translate("MainWindow", "c:", nullptr));
        btnSolveQuad->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        labelResultQuad->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQuadratic), QCoreApplication::translate("MainWindow", "Quadratic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
