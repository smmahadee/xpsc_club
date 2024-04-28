#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (k--) {
        ll x;
        cin >> x;

        int l = 0, r = n - 1, mid;
        int idx = -1;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (x >= a[mid] ) {
                idx = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }

        cout << idx + 1 << " " << endl;
    }

    return 0;
}