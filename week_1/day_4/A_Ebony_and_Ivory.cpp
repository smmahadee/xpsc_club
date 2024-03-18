#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;

    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= c; j++) {
            if (a * i + b * j == c) {
                ans = true;
                break;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << '\n';

    return 0;
}