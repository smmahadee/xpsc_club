#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[i] = make_tuple(x, y, z);
    }

    vector<int> can(n);
    auto ok = [&](int mid) {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++) {
            tuple<int, int, int> T = a[i];
            int total, c, remaining, curr;
            int t = get<0>(T);
            int z = get<1>(T);
            int y = get<2>(T);
            total = ((t * z) + y);
            c = (mid / total);
            remaining = mid % total;
            curr = (c * z) + min(z, (remaining / t));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if (!has) {
            for (int i = 0; i < n; i++) {
                can[i] = may[i];
            }
        }

        return (!has);
    };

    int l = 0, r = n - 1, mid, ans;
    while (l <= r) {
        mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    for (auto val : can) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}