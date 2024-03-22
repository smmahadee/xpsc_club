#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s, t = "Timur";
        cin >> s;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        cout << (s == t ? "YES" : "NO") << endl;
    }

    return 0;
}