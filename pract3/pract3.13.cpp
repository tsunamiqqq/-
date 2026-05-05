#include <iostream>
using namespace std;

int main() {
    int matches = 240;
    int teams = 0;

    for (int n = 1; n <= 100; n++) {
        if (n * (n - 1) == matches) {
            teams = n;
            break;
        }
    }

    cout << "Кількість команд у вищій ліге: " << teams << endl;

    return 0;
}
