#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        char minChar = min(s[0], s[n - 1]);
        char maxChar = max(s[0], s[n - 1]);

        vector<pair<char, int>> order;

        for (int i = 0; i < n; i++) {
            if (s[i] >= minChar && s[i] <= maxChar) {
                order.push_back(make_pair(s[i], i));
            }
        }

        sort(order.begin(), order.end(),
             [&](pair<char, int> a, pair<char, int> b) {
                 return a.second < b.second;
             });

        if (order.size() > 2) {
            sort(order.begin() + 1, order.begin() + order.size() - 1,
                 [&](pair<char, int> a, pair<char, int> b) {
                     if (s[0] > s[n - 1]) {
                         return a.first > b.first;
                     } else {
                         return a.first < b.first;
                     }
                 });
        }

        vector<int> sequence;

        ll moves = 0;

        sequence.push_back(1);

        for (int i = 1; i < order.size(); i++) {
            moves += abs(order[i - 1].first - order[i].first);
            sequence.push_back(order[i].second + 1);
        }

        cout << moves << " " << sequence.size() << endl;

        for (auto i : sequence) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
