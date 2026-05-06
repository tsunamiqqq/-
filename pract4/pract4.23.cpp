#include <iostream>
using namespace std;

int main() {
    double p1 = 0.65;
    double p2 = 0.8;
    double p3 = 0.7;
    double p4 = 0.75;

    double noSetup = p1 * p2 * p3 * p4;
    double atLeastOneSetup = 1 - noSetup;

    cout << "Ймовірність, що жоден верстат не потребуватиме наладки: "
         << noSetup << endl;

    cout << "Ймовірність, що принаймні один верстат потребуватиме наладки: "
         << atLeastOneSetup << endl;

    return 0;
}
