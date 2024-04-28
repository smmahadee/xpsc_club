#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        ll total = 0;
        for (int i = 1; i <= n; i++) {
            int val;
            cin >> val;
            total += min(x * val, y);
        }

        cout << total << "\n";
    }

    return 0;
}