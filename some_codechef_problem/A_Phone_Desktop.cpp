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

        int totalScreen = 0;

        if (y % 2 == 0) {
            totalScreen += y / 2;
        } else {
            totalScreen += y / 2 + 1;
        }

        y -= totalScreen * 7;

        if (x % 15 == 0) {
            totalScreen += x / 15;
        } else {
            totalScreen += x / 15 + 1;
        }

        cout << totalScreen << "\n";
    }

    return 0;
}