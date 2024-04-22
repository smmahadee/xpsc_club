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

        int XOR = 0;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            XOR ^= a[i];
        }

        int ans = XOR;
        for (int i = 0; i < n; i++) {
            ans = min(ans, XOR ^ a[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}