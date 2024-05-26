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

    int n, m;
    cin >> n >> m;

    multi_pbds<int> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int count = p.order_of_key(x + 1);
        cout << count << " ";
    }

    return 0;
}