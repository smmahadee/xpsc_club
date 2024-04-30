#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        int longestSeq = 1;
        int ans = 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == s[i - 1]) {
                longestSeq++;
                ans = max(ans, longestSeq);
            } else {
                longestSeq = 1;
            }
        }

        cout << ans << " ";

        for (int i = n; i < (n + q); i++) {
            char ch;
            cin >> ch;

            s += ch;

            if (s[i] == s[i - 1]) {
                longestSeq++;
                ans = max(ans, longestSeq);
            } else {
                longestSeq = 1;
            }

            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}