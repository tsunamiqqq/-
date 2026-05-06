#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> omega = {
        "ЯЯЯЯ", "ЯЯЯБ", "ЯЯБЯ", "ЯЯББ",
        "ЯБЯЯ", "ЯБЯБ", "ЯББЯ", "ЯБББ",
        "БЯЯЯ", "БЯЯБ", "БЯБЯ", "БЯББ",
        "ББЯЯ", "ББЯБ", "БББЯ", "ББББ"
    };

    vector<string> A;
    vector<string> B;
    vector<string> notA;
    vector<string> notB;

    for (string event : omega) {
        int defectCount = 0;

        for (char ch : event) {
            if (ch == 'Б') {
                defectCount++;
            }
        }

        if (defectCount >= 1) {
            A.push_back(event);
        } else {
            notA.push_back(event);
        }

        if (defectCount >= 2) {
            B.push_back(event);
        } else {
            notB.push_back(event);
        }
    }

    cout << "Простір елементарних подій Omega:\n";
    for (string event : omega) {
        cout << event << " ";
    }

    cout << "\n\nПодія A: хоча б один виріб є бракованим:\n";
    for (string event : A) {
        cout << event << " ";
    }

    cout << "\n\nПодія B: бракованих виробів не менше 2-х:\n";
    for (string event : B) {
        cout << event << " ";
    }

    cout << "\n\nПодія not A: жоден виріб не є бракованим:\n";
    for (string event : notA) {
        cout << event << " ";
    }

    cout << "\n\nПодія not B: бракованих виробів менше 2-х:\n";
    for (string event : notB) {
        cout << event << " ";
    }

    cout << "\n\nПодія A + B означає: хоча б один виріб є бракованим.";
    cout << "\nТому що B входить в A, отже A + B = A.";

    cout << "\n\nПодія AB означає: бракованих виробів не менше 2-х.";
    cout << "\nТому що B входить в A, отже AB = B.";

    cout << endl;

    return 0;
}
