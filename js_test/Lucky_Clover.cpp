#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll ans = (n * 4) - (n - 1);

    cout << ans << endl;

    return 0;
}