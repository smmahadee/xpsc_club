#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxOccurrence = INT_MIN;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            mp[val]++;
            maxOccurrence = max(maxOccurrence, mp[val]);
        }

        if (maxOccurrence == n) {
            cout << 0 << endl;
            continue;
        }

        int count = 1;

        while (maxOccurrence <= n) {
            if (maxOccurrence + maxOccurrence >= n) {
                count += n - maxOccurrence;
                break;
            }

            count += maxOccurrence;
            maxOccurrence = maxOccurrence * 2;
            count++;
        }

        cout << count << endl;
    }
    return 0;
}