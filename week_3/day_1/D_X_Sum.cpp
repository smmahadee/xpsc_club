#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[205][205];

ll getCurSum(int i, int j, int n, int m) {
    ll sum = 0;
    int index = 0;
    while (i - index > -1 && j - index > -1) {
        sum += a[i - index][j - index];
        index++;
    }
    index = 0;
    while (i - index > -1 && j + index < m) {
        sum += a[i - index][j + index];
        index++;
    }

    index = 0;
    while (i + index < n && j - index > -1) {
        sum += a[i + index][j - index];
        index++;
    }

    index = 0;
    while (i + index < n && j + index < m) {
        sum += a[i + index][j + index];
        index++;
    }

    return sum - 3 * a[i][j];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        ll ans = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, getCurSum(i, j, n, m));
            }
        }

        cout << ans << endl;
    }

    return 0;
}