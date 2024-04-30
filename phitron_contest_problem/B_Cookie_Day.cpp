#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll ans = LLONG_MAX;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;

            if (val >= k) {
                flag = true;
                ans = min(ans, val % k);
            }
        }

        if (flag) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}