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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchEdit;
    QTableView *tableView;
    QHBoxLayout *addLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *priceLabel;
    QLineEdit *priceEdit;
    QPushButton *addButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        searchEdit = new QLineEdit(centralwidget);
        searchEdit->setObjectName("searchEdit");

        verticalLayout->addWidget(searchEdit);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        addLayout = new QHBoxLayout();
        addLayout->setObjectName("addLayout");
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");

        addLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName("nameEdit");

        addLayout->addWidget(nameEdit);

        priceLabel = new QLabel(centralwidget);
        priceLabel->setObjectName("priceLabel");

        addLayout->addWidget(priceLabel);

        priceEdit = new QLineEdit(centralwidget);
        priceEdit->setObjectName("priceEdit");

        addLayout->addWidget(priceEdit);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");

        addLayout->addWidget(addButton);


        verticalLayout->addLayout(addLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Product Viewer", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        priceLabel->setText(QCoreApplication::translate("MainWindow", "Price:", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
