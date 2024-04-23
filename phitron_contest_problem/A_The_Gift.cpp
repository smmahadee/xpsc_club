#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, m;
    cin >> x >> n >> m;

    if (x + m >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}