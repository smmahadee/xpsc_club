#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1;
    while (true) {
        if (c < a) {
            i++;
            c = c * i;
            continue;
        }

        if (c > b) {
            cout << -1;
        } else {
            cout << c << endl;
        }

        break;
    }

    return 0;
}
