#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) flag = false;
            if (flag == false) break;
        }

        if (!flag) {
            cout << "YES" << endl;
            cout << s.substr(1, n - 1) << s[0] << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}