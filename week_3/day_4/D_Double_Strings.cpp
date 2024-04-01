#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> strArr(n);
        map<string, bool> mp;

        for (int i = 0; i < n; i++) {
            cin >> strArr[i];
            mp[strArr[i]] = true;
        }

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 1; j < strArr[i].size(); j++) {
                string s1 = strArr[i].substr(0, j);
                string s2 = strArr[i].substr(j, strArr[i].size() - 1);

                if (mp[s1] && mp[s2]) {
                    flag = true;
                    break;
                }
            }

            cout << (flag ? 1 : 0);
        }
        cout << endl;
    }

    return 0;
}