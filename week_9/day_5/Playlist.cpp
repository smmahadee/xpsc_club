#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int start = 0;
    set<int> s;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        while (s.count(a[i])) {
            s.erase(a[start]);
            start++;
        }
        s.insert(a[i]);
        ans = max(ans, (int)s.size());
    }

    cout << ans << endl;

    return 0;
}