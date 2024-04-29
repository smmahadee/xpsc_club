#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int k;
    cin >> k;

    while (k--) {
        ll l, r;
        cin >> l >> r;

        vector<ll>::iterator l_it = lower_bound(a.begin(), a.end(), l);
        vector<ll>::iterator r_it = upper_bound(a.begin(), a.end(), r);
        cout << (r_it - a.begin()) - (l_it - a.begin()) << " ";
    }

    return 0;
}