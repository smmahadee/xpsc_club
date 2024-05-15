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

        for (int i = 0; i < y; i++) {
            if (x > 1000) {
                x *= 2;
            } else {
                x += 1000;
            }
        }

        cout << x << endl;
    }

    return 0;
}