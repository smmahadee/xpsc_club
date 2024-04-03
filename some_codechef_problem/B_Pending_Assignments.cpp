#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        ll dayMinutes = z * 1440;
        ll totalMinutesRequired = x * y;

        cout << (totalMinutesRequired <= dayMinutes ? "YES" : "NO") << endl;
    }

    return 0;
}