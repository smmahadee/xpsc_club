#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;

        if ((2 * x - y >= 0) && (2 * x - y) % 3 == 0 && (2 * y - x >= 0) &&
            (2 * y - x) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}