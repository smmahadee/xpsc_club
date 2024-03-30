#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<ll> prefSum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefSum[i] = prefSum[i - 1] + a[i];
        }

        while (q--) {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll subSum = prefSum[r] - prefSum[l - 1];
            ll ans = (prefSum[n] - subSum) + k * (r - l + 1);

            if (ans % 2 != 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}