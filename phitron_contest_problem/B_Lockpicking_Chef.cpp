#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s, k;
        cin >> s >> k;

        int moves = INT_MAX;

        for (int i = 0; i <= n - m; i++) {
            int tempMoves = 0;

            for (int j = 0; j < m; j++) {
                tempMoves +=
                    min(abs(s[i + j] - k[j]), abs(10 - abs(s[i + j] - k[j])));
            }

            if (tempMoves < moves) moves = tempMoves;
        }

        cout << moves << endl;
    }

    return 0;
}