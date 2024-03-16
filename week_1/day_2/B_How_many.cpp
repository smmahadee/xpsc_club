#include <iostream>

using namespace std;

int main() {
    int s, t;
    cin >> s >> t;

    int total = 0;

    for (int i = 0; i <= s; i++) {
        for (int j = 0; j <= s - i; j++) {
            for (int k = 0; k <= s - i - j; k++) {
                if (i + j + k <= s && i * j * k <= t) {
                    total++;
                }
            }
        }
    }

    cout << total;

    return 0;
}
