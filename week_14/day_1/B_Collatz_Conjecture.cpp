#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll xx = y - x % y;

        while (k >= xx) {
            k -= xx;
            x += xx;

            while (x % y == 0) {
                x /= y;
            }

            xx = y - x % y;

            if (x == 1) {
                k = k % xx;
                x += k;
                k = 0;
                break;
            }
        }

        x += k;

        cout << x << endl;
    }

    return 0;
}