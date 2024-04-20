#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        ll mn = 0;
        ll mx = 0;
        ll total = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x >= l && x <= r) {
                total++;
                mx = max(mx, total);
            } else {
                total--;
                mn = min(mn, total);
            }
        }

        cout << mx << " " << mn << endl;
    }

    return 0;
}
