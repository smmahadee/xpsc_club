#include <bits/stdc++.h>

using namespace std;

long long getDifference(string str1, string str2) {
    int diff = 0;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            diff += abs(str1[i] - str2[i]);
        }
    }
    return diff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        string a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, getDifference(a[i], a[j]));
            }
        }

        cout << ans << endl;
    }

    return 0;
}