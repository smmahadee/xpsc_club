#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> vals;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            vals.insert(val);
        }

        if ((n - vals.size()) % 2 == 0) {
            cout << vals.size() << endl;
        } else {
            cout << vals.size() - 1 << endl;
        }
    }

    return 0;
}