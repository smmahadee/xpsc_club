#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int equalA = a + (a - 1);
    int equalB = b + (b - 1);
    int equalAB = a + b;

    if (equalA >= equalB) {
        if (equalA >= equalAB) {
            cout << equalA;
        } else {
            cout << equalAB;
        }
    } else {
        if (equalB >= equalAB) {
            cout << equalB;
        } else {
            cout << equalAB;
        }
    }

    return 0;
}