#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s, t;
        cin >> s >> t;

        cout << (max(s, t) * 2 - 1) << endl;
    }

    return 0;
}