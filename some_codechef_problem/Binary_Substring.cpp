#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<int, int> type;

        for (int i = 0; i < n; i += 2) {
            if (s[i] == '0' && s[i + 1] == '0')
                type[0]++;
            else if (s[i] == '0' && s[i + 1] == '1')
                type[1]++;
            else if (s[i] == '1' && s[i + 1] == '1')
                type[2]++;
            else
                type[3]++;
        }

        int result = 0;
        if (type[3]) {
            result = 1;
            type[3]--;
        }
        
        result += 2 * (type[0]);
        result += 2 * (type[2]);
        if (type[1]) result += 2;
        if (type[3]) result++;

        cout << result << "\n";
    }

    return 0;
}