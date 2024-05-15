#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    if (2 * (x + y) < 1000 || ((2 * (x + y)) % 1000) != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}