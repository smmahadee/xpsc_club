#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct Compare {
    bool operator()(const int& a, const int& b) const { return a < b; }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;

        priority_queue<int, vector<int>, Compare> pq;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if (b == l) {
                pq.push(a);
            }
        }

        ll ans = 0;

        while (k--) {
            if (pq.empty()) {
                ans = -1;
                break;
            }

            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}