#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n <= 4) {
            cout << 1 << endl;
        } else {
            int totalCows = n / 4;
            if (n % 4 == 0) {
                cout << totalCows << endl;
            } else {
                cout << totalCows + 1 << endl;
            }
        }
    }

    return 0;
}