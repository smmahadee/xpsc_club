#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        cout << (((100 - x) / 10) * 10) << endl;
    }

    return 0;
}