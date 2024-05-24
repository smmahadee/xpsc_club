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

        string s;
        cin >> s;

        int zero = 0;
        int one = 0;

        char prev = s[0];
        if (prev == '0') {
            zero++;
        } else {
            one++;
        }

        for (int i = 1; i < n; i++) {
            if (s[i] != prev) {
                if (s[i] == '0') {
                    zero++;
                } else {
                    one++;
                }

                prev = s[i];
            }
        }

        cout << min(one, zero) << endl;
    }

    return 0;
}
