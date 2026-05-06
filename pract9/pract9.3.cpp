#include <iostream>
#include <cmath>
using namespace std;

double normalCDF(double x, double mean, double sigma) {
    return 0.5 * (1 + erf((x - mean) / (sigma * sqrt(2))));
}

int main() {
    double mean = 100.0;
    double sigma = 2.0;

    double pMore100 = 1 - normalCDF(100.0, mean, sigma);

    double pBetween = normalCDF(101.0, mean, sigma) - normalCDF(99.0, mean, sigma);

    cout << "Ймовірність, що вага більша 100 г: " << pMore100 << endl;
    cout << "У відсотках: " << pMore100 * 100 << "%" << endl;

    cout << endl;

    cout << "Ймовірність, що вага від 99 г до 101 г: " << pBetween << endl;
    cout << "У відсотках: " << pBetween * 100 << "%" << endl;

    return 0;
}
