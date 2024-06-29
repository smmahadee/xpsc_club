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

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        ll ans = LLONG_MIN;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                ll curValue =
                    (v[i].first * v[j].second) + (v[j].first * v[i].second);

                ans = max(ans, curValue);
            }
        }

        cout << ans << endl;
    }

    return 0;
}