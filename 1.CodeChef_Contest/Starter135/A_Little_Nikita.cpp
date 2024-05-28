#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (n < m) {
            cout << "No" << endl;
        } else if (n == m) {
            cout << "Yes" << endl;
        } else {
            if ((n - m) % 2 == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}