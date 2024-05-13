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

        sort(a, a + n);

        ll sum = 0;
        for (int i = 0; i < n / 2; i++) {
            sum -= a[i];
        }
        for (int i = n / 2; i < n; i++) {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}