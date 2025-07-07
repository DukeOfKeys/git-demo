#include <QtTest>
#include "../num_class/num.h"
// add necessary includes here
#include <vector>
#include <algorithm>
using namespace std;
class num_lib : public QObject
{
    Q_OBJECT

public:

    num_lib();
    ~num_lib();
    Num engine;
private slots:
    void test_prime_function();
    void test_gcd_function();
    void test_reverseDigits();
    void test_findArmstrongNumbers_data();
    void test_findArmstrongNumbers();
};
void num_lib::test_findArmstrongNumbers_data(){
    QTest::addColumn<int>("range_start");
    QTest::addColumn<int>("range_end");
    QTest::addColumn<int>("result");

    QTest::newRow("all 0") << 0 << 0 << -1;
    QTest::newRow("simple range")<< 150 << 160 << 153;
    QTest::newRow("range")<< 8000 << 9000 << 8208;
}
void num_lib::test_findArmstrongNumbers(){
    QFETCH(int, range_start);
    QFETCH(int, range_end);
    QFETCH(int, result);
    QCOMPARE(engine.findArmstrongNumbers(range_start,range_end), result);
}
void num_lib::test_prime_function(){
    vector<pair<int, bool>> test_data = {{13, true}, {2,true}, {1488, false}, {49, false}, {21, false}, {7, true}};
    for(auto el : test_data){
        QCOMPARE( engine.isPrime(el.first),el.second);
    }

}
void num_lib::test_gcd_function(){
    vector<pair<pair<int, int>, int>> test_data = {{{4,5}, 1}, {{12,6}, 6}, {{20,4}, 4}, {{3,3},3}};
    for(auto el : test_data){
        QCOMPARE( engine.gcd(el.first.first, el.first.second),el.second);
    }
}
void num_lib:: test_reverseDigits(){
    for(int index = 0; index <1000; index++){
        auto number = QRandomGenerator().generate();
        string answer = to_string(number);
        reverse(answer.begin(), answer.end());
        QVERIFY(to_string(engine.reverseDigits(number)) == answer);
    }
}


num_lib::num_lib() {
}

num_lib::~num_lib() {}



QTEST_APPLESS_MAIN(num_lib)

#include "tst_num_lib.moc"
