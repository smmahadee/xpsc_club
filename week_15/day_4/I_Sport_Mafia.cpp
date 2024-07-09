#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll num, m;
    cin >> num >> m;

    ll sum = 0;
    for (ll i = 1; i <= num; i++) {
        sum += i;
        ll ans = sum - m;
        if (ans >= 0 && i + ans == num) {
            return cout << ans << endl;
        }
    }

    return 0;
}