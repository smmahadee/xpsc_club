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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            if (a[0] % 2 == 0) {
                cout << 1 << endl;
                continue;
            } else {
                cout << 0 << endl;
                continue;
            }
        }

        int l = 0, r = 1, count = 1;
        ll totalSum = a[l];

        while (r < n) {
            totalSum += a[r];
            if (totalSum % 2 == 0) {
                count = max(count, r - l + 1);
                r++;
            } else {
                if ((totalSum + a[r]) % 2 == 0) {
                }

                r++;
            }
        }

        cout << count << endl;
    }

    return 0;
}