
#include <bits/stdc++.h>
using namespace std;

int isKallindrome(vector<int>& v) {
    int i = 0, j = v.size() - 1;
    int ans = 1;
    while (i < j) {
        if (v[i] != v[j]) {
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ar[n + 2];
        for (int i = 0; i < n; i++) cin >> ar[i];

        int i = 0, j = n - 1;
        int ans = -1;
        int a, b;
        while (i < j) {
            if (ar[i] != ar[j]) {
                ans = 1;
                a = ar[i];
                b = ar[j];
                break;
            }
            i++;
            j--;
        }
        if (ans == -1)
            cout << "YES" << endl;
        else {
            vector<int> v1, v2;
            for (int i = 0; i < n; i++) {
                if (ar[i] == a) continue;
                v1.push_back(ar[i]);
            }
            for (int i = 0; i < n; i++) {
                if (ar[i] == b) continue;
                v2.push_back(ar[i]);
            }
            int ans1 = isKallindrome(v1);
            int ans2 = isKallindrome(v2);
            if (ans1 == 1 || ans2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
