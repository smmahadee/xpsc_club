#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int operationNeed = 0;

        if (k > 1) {
            while (a * k <= b) {
                a = a * k;
                operationNeed++;
            }

            if (a == b) {
                cout << operationNeed - 1 << endl;
            } else {
                a = a / k;
                operationNeed--;

                operationNeed = b - a;

                cout << operationNeed << endl;
            }

        } else {
            cout << b - a << endl;
        }
    }

    return 0;
}