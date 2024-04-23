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

        int ans = 1;
        while (ans <= n) {
            ans *= 2;
        }

        ans /= 2;
        ans--;

        cout << ans << "\n";
    }

    return 0;
}