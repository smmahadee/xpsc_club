#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int chefPoint = 0;
        int chefinaPoint = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                chefPoint++;
                chefinaPoint++;
            } else if ((a[i] == 'R' && b[i] == 'S') ||
                       (a[i] == 'S' && b[i] == 'P') ||
                       (a[i] == 'P' && b[i] == 'R')) {
                chefPoint++;
            } else {
                chefinaPoint++;
            }
        }

        if (chefinaPoint > chefPoint) {
            cout << chefinaPoint - chefPoint << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}