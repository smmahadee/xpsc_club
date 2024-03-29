#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> freqMap;
        for (int i = 0; i < n; i++) {
            freqMap[s[i]]++;
        }

        int count = 0;
        for (auto it : freqMap) {
            if (it.second % 2 != 0) {
                count++;
            }
        }

        if (count - 1 < 0)
            count = 0;
        else
            count = count - 1;

        if (k >= count && k <= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}