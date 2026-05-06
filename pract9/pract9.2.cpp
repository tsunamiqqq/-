#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

const double PI = 3.14159265358979323846;

double normalCDF(double x, double mean, double sigma) {
    return 0.5 * (1 + erf((x - mean) / (sigma * sqrt(2))));
}

double density(double x, double mean, double sigma) {
    return (1 / (sigma * sqrt(2 * PI))) *
           exp(-pow(x - mean, 2) / (2 * sigma * sigma));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double mean = 4.0;
    double sigma = 0.03;

    double pMore = 1 - normalCDF(4.0, mean, sigma);
    double pLess = normalCDF(4.0, mean, sigma);
    double pBetween = normalCDF(4.05, mean, sigma) - normalCDF(3.95, mean, sigma);

    cout << u8"Ймовірність, що жирність більша 4%: " << pMore << endl;
    cout << u8"Ймовірність, що жирність менша 4%: " << pLess << endl;
    cout << u8"Ймовірність, що жирність від 3.95% до 4.05%: " << pBetween << endl;

    cout << u8"\nУ відсотках:" << endl;
    cout << u8"Більша 4%: " << pMore * 100 << "%" << endl;
    cout << u8"Менша 4%: " << pLess * 100 << "%" << endl;
    cout << u8"Від 3.95% до 4.05%: " << pBetween * 100 << "%" << endl;

    double x = 4.0;

    cout << u8"\nЩільність розподілу при x = 4: "
         << density(x, mean, sigma) << endl;

    return 0;
}
