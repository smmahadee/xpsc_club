#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int omCount = 0, omMax = 0;
        int addyCount = 0, addyMax = 0;

        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            if (val == 0) {
                omCount = 0;
            } else {
                omCount++;
            }

            omMax = max(omCount, omMax);
        }

        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            if (val == 0) {
                addyCount = 0;
            } else {
                addyCount++;
            }
            addyMax = max(addyCount, addyMax);
        }

        if (omMax == addyMax) {
            cout << "Draw" << endl;
        } else if (omMax > addyMax) {
            cout << "Om" << endl;
        } else {
            cout << "Addy" << endl;
        }
    }

    return 0;
}