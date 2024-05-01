#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> batsman(n);
        vector<ll> bowlers(m);
        for (int i = 0; i < n; i++) {
            cin >> batsman[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> bowlers[i];
        }

        if (n < 4 || m < 4 || (n + m) < 11) {
            cout << -1 << endl;
        } else {
            sort(batsman.begin(), batsman.end(), greater<ll>());
            sort(bowlers.begin(), bowlers.end(), greater<ll>());

            ll sum = 0;
            for (int i = 0; i < 4; i++) {
                sum += batsman[i];
            }

            for (int i = 0; i < 4; i++) {
                sum += bowlers[i];
            }

            vector<ll> newArr;

            newArr.insert(newArr.end(), batsman.begin() + 4, batsman.end());
            newArr.insert(newArr.end(), bowlers.begin() + 4, bowlers.end());
            sort(newArr.begin(), newArr.end(), greater<ll>());

            for (int i = 0; i < 3; i++) {
                sum += newArr[i];
            }

            cout << sum << endl;
        }
    }

    return 0;
}