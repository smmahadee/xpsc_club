#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++) {
        ll val;
        cin >> val;
        a[i] = val;
    }

    ll totalNeed = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            totalNeed += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << totalNeed << endl;

    return 0;
}