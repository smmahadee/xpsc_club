#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pbds<ll> s;
    for (int i = 0; i < k; i++) {
        s.insert(a[i]);
    }

    ll old_m = *s.find_by_order((k + 1) / 2 - 1);
    ll cost = 0;
    for (int i = 0; i < k; i++) {
        cost += abs(a[i] - old_m);
    }

    cout << cost;

    for (int i = 0; i < n - k; i++) {
        s.erase(s.find_by_order(s.order_of_key(a[i])));
        s.insert(a[i + k]);
        ll m = *s.find_by_order((k + 1) / 2 - 1);

        cost = cost + abs(m - a[i + k]) - abs(old_m - a[i]);
        if (k % 2 == 0) cost -= (m - old_m);

        old_m = m;

        cout << " " << cost;
    }

    cout << endl;

    return 0;
}