#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll a[n];
        for (int n = 0; n < n; n++) {
            cin >> a[n];
        }

        sort(a, a + n);
        ll mxVal = a[n - 1];
        for (int i = 0; i < n; i++) {
            ll temp = (mxVal - a[i]) / k;
            a[i] = a[i] + (temp * k);
        }

        ll mnVal = a[n - 1];
        for (int i = 0; i < n; i++) {
            mnVal = min(mnVal, a[i]);
        }
        ll ans = mxVal - mnVal;
        sort(a, a+n);
        mxVal = a[n-1];
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, mxVal - a[i]);
            mxVal = max(mxVal, a[i] + k);
        }
        

        // cout << mnVal << " " << endl;

        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " ";
        // }

        cout << ans << endl;
    }

    return 0;
}