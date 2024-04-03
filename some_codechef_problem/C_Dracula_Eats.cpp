#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << 1 << endl;
        } else {
            int ans = (n - 2) / 7 + 1;
            cout << ans << endl;
        }
    }
    return 0;
}