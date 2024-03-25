#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long k;
    cin >> k;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long l = 0, r = 0, ans = 0, sum = 0;
    multiset<long long> ml;

    while (r < n) {
        ml.insert(a[r]);

        long long mn, mx;
        mn = *ml.begin();
        mx = *ml.rbegin();

        if (mx - mn <= k) {
            ans += r - l + 1;
        } else {
            while (l < r) {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k) {
                    break;
                }

                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k) {
                ans += r - l + 1;
            }
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}