#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        ll total = 0;

        for (int i = 0; i < n; i++) {
            if (i < k) {
                total += max(7 - a[i], a[i]);
            } else {
                total += a[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}