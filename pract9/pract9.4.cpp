#include <iostream>
#include <cmath>
using namespace std;

double normalCDF(double x, double mean, double sigma) {
    return 0.5 * (1 + erf((x - mean) / (sigma * sqrt(2))));
}

int main() {
    double mean = 170.0;
    double sigma = 7.0;

    double pMore170 = 1 - normalCDF(170.0, mean, sigma);

    double pLess170 = normalCDF(170.0, mean, sigma);

    double pBetween = normalCDF(180.0, mean, sigma) - normalCDF(170.0, mean, sigma);

    cout << "Ймовірність, що зріст більший 170 см: " << pMore170 << endl;
    cout << "У відсотках: " << pMore170 * 100 << "%" << endl;

    cout << endl;

    cout << "Ймовірність, що зріст менший 170 см: " << pLess170 << endl;
    cout << "У відсотках: " << pLess170 * 100 << "%" << endl;

    cout << endl;

    cout << "Ймовірність, що зріст від 170 до 180 см: " << pBetween << endl;
    cout << "У відсотках: " << pBetween * 100 << "%" << endl;

    return 0;
}
