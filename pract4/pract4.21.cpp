#include <iostream>
using namespace std;

int main() {
    int total = 6 * 6 * 6;

    int cubeA = 1;
    int cubeB = 6;

    double probabilityA = (double)cubeA / total;
    double probabilityB = (double)cubeB / total;

    cout << "Усього можливих результатів: " << total << endl;

    cout << "1) Ймовірність того, що на кожному кубику випало 5 очок: "
         << cubeA << "/" << total << " = " << probabilityA << endl;

    cout << "2) Ймовірність того, що на всіх кубиках випала однакова кількість очок: "
         << cubeB << "/" << total << " = " << probabilityB << endl;

    return 0;
}
