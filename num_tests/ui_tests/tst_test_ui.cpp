#include <QtTest>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include "../num_class/num.h"
#include "../num_class/mainwindow.h"
class TestMainWindow : public QObject {
    Q_OBJECT

private:
    MainWindow* window;

private slots:
    void initTestCase() {
        window = new MainWindow();
        window->show();
        QVERIFY(window->isVisible());
    }

    void cleanupTestCase() {
        delete window;
    }

    void test_computeGcd_data() {
        QTest::addColumn<int>("a");
        QTest::addColumn<int>("b");
        QTest::addColumn<int>("expected");

        QTest::newRow("gcd 48,18") << 48 << 18 << 6;
        QTest::newRow("gcd 7,3") << 7 << 3 << 1;
        QTest::newRow("gcd 0,5")  << 0 << 5 << 5;
    }

    void test_computeGcd() {
        QFETCH(int, a);
        QFETCH(int, b);
        QFETCH(int, expected);

        // Set inputs
        QLineEdit* editA = window->findChild<QLineEdit*>("edit_a_gcd");
        QLineEdit* editB = window->findChild<QLineEdit*>("edit_b_gcd");
        QPushButton* btn = window->findChild<QPushButton*>("btnComputeGcd");
        QLabel* result = window->findChild<QLabel*>("labelResultGcd");

        QVERIFY(editA && editB && btn && result);

        editA->clear();
        editB->clear();
        QTest::keyClicks(editA, QString::number(a));
        QTest::keyClicks(editB, QString::number(b));

        QTest::mouseClick(btn, Qt::LeftButton);

        QString expectedText = "Result: " + QString::number(expected);
        QCOMPARE(result->text(), expectedText);
    }

    void test_checkPrime_data() {
        QTest::addColumn<int>("n");
        QTest::addColumn<bool>("isPrime");

        QTest::newRow("prime 7") << 7 << true;
        QTest::newRow("prime 8") << 8 << false;
    }

    void test_checkPrime() {
        QFETCH(int, n);
        QFETCH(bool, isPrime);

        QLineEdit* edit = window->findChild<QLineEdit*>("edit_n_prime");
        QPushButton* btn = window->findChild<QPushButton*>("btnCheckPrime");
        QLabel* result = window->findChild<QLabel*>("labelResultPrime");

        QVERIFY(edit && btn && result);

        edit->clear();
        QTest::keyClicks(edit, QString::number(n));
        QTest::mouseClick(btn, Qt::LeftButton);

        QString expectedText = QString("Result: ") + (isPrime ? "is prime" : "is not prime");
        QCOMPARE(result->text(), expectedText);
    }

    void test_findArmstrong_numbers() {
        QLineEdit* editStart = window->findChild<QLineEdit*>("edit_start_arm");
        QLineEdit* editEnd = window->findChild<QLineEdit*>("edit_end_arm");
        QPushButton* btn = window->findChild<QPushButton*>("btnFindArmstrong");
        QTextEdit* textResult = window->findChild<QTextEdit*>("textResultArmstrong");

        QVERIFY(editStart && editEnd && btn && textResult);

        // Test a range with known Armstrong numbers: 1 to 500
        editStart->clear(); editEnd->clear();
        QTest::keyClicks(editStart, "1");
        QTest::keyClicks(editEnd, "500");
        QTest::mouseClick(btn, Qt::LeftButton);

        QString output = textResult->toPlainText();
        QVERIFY(output.contains("1"));
        QVERIFY(output.contains("153"));
        QVERIFY(output.contains("370"));
        QVERIFY(output.contains("371"));
        QVERIFY(output.contains("407"));
    }

    void test_solveQuadratic() {
        QLineEdit* editA = window->findChild<QLineEdit*>("edit_a_quad");
        QLineEdit* editB = window->findChild<QLineEdit*>("edit_b_quad");
        QLineEdit* editC = window->findChild<QLineEdit*>("edit_c_quad");
        QPushButton* btn = window->findChild<QPushButton*>("btnSolveQuad");
        QLabel* result = window->findChild<QLabel*>("labelResultQuad");

        QVERIFY(editA && editB && editC && btn && result);

        // Test equation x^2 - 5x + 6 = 0 => roots 2 and 3
        editA->clear(); editB->clear(); editC->clear();
        QTest::keyClicks(editA, "1");
        QTest::keyClicks(editB, "-5");
        QTest::keyClicks(editC, "6");
        QTest::mouseClick(btn, Qt::LeftButton);

    }
};

QTEST_MAIN(TestMainWindow)
#include "tst_test_ui.moc"

