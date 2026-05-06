#include <iostream>
using namespace std;

int main() {
    double p1 = 0.95;
    double p2 = 0.9;

    double onlyFirst = p1 * (1 - p2);
    double onlySecond = p2 * (1 - p1);

    double result = onlyFirst + onlySecond;

    cout << "Ймовірність, що спрацює тільки один сигналізатор: "
         << result << endl;

    return 0;
}
