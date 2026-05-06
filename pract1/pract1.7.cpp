#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> omega = {
        "ЯЯЯ", "ЯЯД", "ЯДЯ", "ЯДД",
        "ДЯЯ", "ДЯД", "ДДЯ", "ДДД"
    };

    vector<string> B;

    for (string event : omega) {
        bool hasDefect = false;

        for (char ch : event) {
            if (ch == 'Д') {
                hasDefect = true;
            }
        }

        if (hasDefect) {
            B.push_back(event);
        }
    }

    cout << "Простір елементарних подій Omega:\n";
    for (string event : omega) {
        cout << event << " ";
    }

    cout << "\n\nПодія B: хоча б один виріб має дефект:\n";
    for (string event : B) {
        cout << event << " ";
    }

    cout << "\n\nУ вигляді формули:\n";
    cout << "B = A1 + A2 + A3";

    cout << endl;

    return 0;
}
