#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = n + 1;
    long long sum = 0;

    while (r < n) {
        sum += a[r];

        if (sum < s) {
            r++;
        } else {
            while (sum >= s) {
                sum -= a[l++];
            }

            ans = min(ans, r - l + 2);

            r++;
        }
    }

    if (ans > n) ans = -1;
    cout << ans << endl;

    return 0;
}