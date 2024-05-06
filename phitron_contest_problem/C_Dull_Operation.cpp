#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        bool flag = false;
        ll f, s;

        for (int i = 0; i <= n / 2; i++) {
            ll b = n - i;

            if ((i | b) * (i ^ b) == n) {
                flag = true;
                f = i;
                s = b;
                break;
            }
        }

        if (flag) {
            cout << f << " " << s << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}