#ifndef NUM_H
#define NUM_H

#include <vector>
#include <cmath>
#include <utility>
#include <tuple>
using namespace std;
class Num {
public:
    Num() = default;

    unsigned int gcd(unsigned int a, unsigned int b);
    bool isPrime(unsigned int n);
    int findArmstrongNumbers(unsigned int start, unsigned int end);
    vector<int> findArmstrongNumbersV(unsigned int start, unsigned int end);
    std::tuple<int, double, double> solveQuadratic(double a, double b, double c);
    double computeLeibnizSeries(unsigned int precision);
    std::vector<unsigned int> primeFactors(unsigned int n);
    unsigned int reverseDigits(unsigned int num);
    bool isPalindrome(unsigned int num);
    std::vector<std::pair<long, long>> findPointsInCircle(double xc, double yc, double r);
    double computeSin(double x_rad, unsigned int precision);
    double sqrtNewton(double x, unsigned int iterations = 1000);

private:
    unsigned int calculateArmstrongSum(unsigned int num);
    double factorial(double n);
};

#endif // NUM_H
