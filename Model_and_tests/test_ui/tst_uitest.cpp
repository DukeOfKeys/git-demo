#include <QCoreApplication>
#include <QtTest>

// add necessary includes here

class uitest : public QObject
{
    Q_OBJECT

public:
    uitest();
    ~uitest();

private slots:
    void test_case1();
};

uitest::uitest() {}

uitest::~uitest() {}

void uitest::test_case1() {}

QTEST_MAIN(uitest)

#include "tst_uitest.moc"
