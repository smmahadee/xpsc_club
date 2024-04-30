#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            int val;
            cin >> val;
            total += val;
        }

        cout << (total >= 4 ? "YES" : "NO") << endl;
    }

    return 0;
}