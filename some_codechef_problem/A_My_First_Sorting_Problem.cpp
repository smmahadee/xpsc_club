#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x < y) {
            cout << x << " " << y << endl;
        } else if (x > y) {
            cout << y << " " << x << endl;
        } else {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}