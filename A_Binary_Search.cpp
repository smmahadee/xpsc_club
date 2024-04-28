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
        ll val;
        cin >> val;

        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == val) {
                flag = true;
                break;
            } else if (a[mid] > val) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}