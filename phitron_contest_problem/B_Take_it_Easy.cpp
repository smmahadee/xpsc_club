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

        ll total = 0;
        int a[n];

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            a[i] = val;
            total += val;
        }

        if (total % n != 0) {
            cout << "No" << endl;
            continue;
        }

        ll avg = total / n;

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (abs(avg - a[i]) % 2 != 0) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;
}