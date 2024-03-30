#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string t = "meow";

        for (int i = 0; i < n; i++) {
            if (s[i] <= 'Z') s[i] = s[i] + 32;
        }

        string t2 = "";
        for (int i = 0; i < n; i++) {
            if (t2.empty() || t2.back() != s[i]) t2.push_back(s[i]);
        }

        if (t == t2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}