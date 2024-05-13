#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int l, v1, v2;
        cin >> l >> v1 >> v2;

        int v1Time = (l % v1 == 0 ? l / v1 : l / v1 + 1);
        int v2Time = (l % v2 == 0 ? l / v2 : l / v2 + 1);

        int ans = (v1Time - v2Time - 1);

        if (ans < 0) {
            cout << "-1\n";
        } else {
            cout << ans << "\n";
        }
    }

    return 0;
}