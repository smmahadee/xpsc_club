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

        ll a[n];
        ll b[n];

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) cin >> b[i];

        ll ans1 = 0, ans2 = 0;
        ll count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            if ((a[i] == 0 && b[i] == -1) || (b[i] == 0 && a[i] == -1)) {
                continue;
            } else if (a[i] == 1 && b[i] <= 0) {
                ans1++;
            } else if (b[i] == 1 && a[i] <= 0) {
                ans2++;
            } else if (a[i] == 1 && b[i] == 1)
                count1++;
            else if (a[i] == -1 && b[i] == -1)
                count2++;
        }

        while (count1-- > 0) {
            if (ans1 >= ans2)
                ans2++;
            else
                ans1++;
        }

        while (count2-- > 0) {
            if (ans1 >= ans2)
                ans1--;
            else
                ans2--;
        }

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}