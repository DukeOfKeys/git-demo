#include "num.h"
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;
unsigned int Num::gcd(unsigned int a, unsigned int b) {
    while (a != 0 && b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}


bool Num::isPrime(unsigned int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (unsigned int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}


unsigned int Num::calculateArmstrongSum(unsigned int num) {
    unsigned int sum = 0;
    unsigned int temp = num;
    int digits = static_cast<int>(log10(num)) + 1;
    while (temp) {
        sum += static_cast<unsigned int>(pow(temp % 10, digits));
        temp /= 10;
    }
    return sum;
}


int Num::findArmstrongNumbers(unsigned int start, unsigned int end) {
    for (unsigned int num = start; num <= end; ++num) {
        if (calculateArmstrongSum(num) == num && num != 0) {
            return num;
        }
    }
    return -1;
}


std::tuple<int, double, double> Num::solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) return std::make_tuple(0, 0, 0);
    if (discriminant == 0) {
        double root = -b / (2 * a);
        return std::make_tuple(1, root, root);
    }
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    return std::make_tuple(2, root1, root2);
}


double Num::computeLeibnizSeries(unsigned int precision) {
    double sum = 0.0;
    int k = 1;
    double threshold = pow(10, -static_cast<int>(precision));
    double prev_sum;

    do {
        double sign = (k % 2 == 1) ? 1.0 : -1.0;
        double term = sign / pow(2 * k - 1, 2);
        prev_sum = sum;
        sum += term;
        k++;
    } while (fabs(sum - prev_sum) > threshold);

    return sum;
}


std::vector<unsigned int> Num::primeFactors(unsigned int n) {
    std::vector<unsigned int> factors;
    for (unsigned int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}


unsigned int Num::reverseDigits(unsigned int num) {
    unsigned int reversed = 0;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}


bool Num::isPalindrome(unsigned int num) {
    return num == reverseDigits(num);
}


std::vector<std::pair<long, long>> Num::findPointsInCircle(double xc, double yc, double r) {
    std::vector<std::pair<long, long>> points;
    long min_x = static_cast<long>(floor(xc - r));
    long max_x = static_cast<long>(ceil(xc + r));
    long min_y = static_cast<long>(floor(yc - r));
    long max_y = static_cast<long>(ceil(yc + r));

    for (long x = min_x; x <= max_x; ++x) {
        for (long y = min_y; y <= max_y; ++y) {
            double dx = x - xc, dy = y - yc;
            if (dx * dx + dy * dy <= r * r) {
                points.push_back({x, y});
            }
        }
    }
    return points;
}


double Num::factorial(double n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


double Num::computeSin(double x_rad, unsigned int precision) {
    double sin_val = 0.0;
    double threshold = pow(10, -static_cast<int>(precision));
    double term = x_rad;
    int n = 1;

    do {
        sin_val += term;
        n += 2;
        term = -term * x_rad * x_rad / (n * (n - 1));
    } while (fabs(term) > threshold);

    return sin_val;
}


double Num::sqrtNewton(double x, unsigned int iterations) {
    if (x < 0) return -1;
    if (x == 0) return 0;

    double guess = x / 2.0;
    for (unsigned int i = 0; i < iterations; ++i) {
        double prev = guess;
        guess = (guess + x / guess) / 2.0;
        if (fabs(guess - prev) < 1e-10) break;
    }
    return guess;
}
vector<int> Num::findArmstrongNumbersV(unsigned int start, unsigned int end){
    vector<int> result;
    for (unsigned int num = start; num <= end; ++num) {
        if (calculateArmstrongSum(num) == num && num != 0) {
            result.push_back(num);
        }
    }
    return result;
}
