#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll fastDis = a - 1;
        ll secondDis = abs(b - c) + (c - 1);

        if (fastDis < secondDis) {
            cout << 1 << endl;
        } else if (fastDis > secondDis) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}