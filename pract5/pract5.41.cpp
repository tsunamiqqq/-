#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

double bernoulli(int n, int k, double p) {
    double q = 1 - p;

    return combination(n, k) * pow(p, k) * pow(q, n - k);
}

int main() {
    int n = 5;
    double p = 0.49;

    double probabilityA = bernoulli(n, 2, p);

    double probabilityB = 0;

    for (int k = 0; k <= 2; k++) {
        probabilityB += bernoulli(n, k, p);
    }

    cout << "Ймовірність того, що буде рівно 2 дівчат: " << probabilityA << endl;
    cout << "Ймовірність того, що буде не більше 2 дівчат: " << probabilityB << endl;

    return 0;
}
