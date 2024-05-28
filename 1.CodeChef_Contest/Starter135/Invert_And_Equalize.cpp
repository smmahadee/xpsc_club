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

        int substr0 = 0;
        int substr1 = 0;

        if (s[0] == '0') substr0++;
        if (s[0] == '1') substr1++;

        for (int i = 1; i < n; i++) {
            if (s[i] == '0' && s[i - 1] == '1') substr0++;
            if (s[i] == '1' && s[i - 1] == '0') substr1++;
        }

        cout << min(substr0, substr1) << endl;
    }

    return 0;
}