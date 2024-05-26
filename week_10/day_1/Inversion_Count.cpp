#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long

using namespace std;
using namespace __gnu_pbds;

template <class T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T>
using multi_pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
                        tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a;
        pbds<int> p;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        ll total = 0;
        for (int i = n - 1; i >= 0; i--) {
            total += p.order_of_key(a[i]);
            p.insert(a[i]);
        }

        cout << total << endl;
    }

    return 0;
}