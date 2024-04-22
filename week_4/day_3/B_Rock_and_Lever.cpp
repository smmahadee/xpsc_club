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
        int a[n];

        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[__lg(a[i])]++;
        }
        ll ans = 0;
        for (auto [x, y] : cnt) {
            ans += (1ll * y * (y - 1) / 2);
        }

        cout << ans << "\n";
    }

    return 0;
}