#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool doIntersect(int a, int b, int c, int d) {
    if (a > b) swap(a, b);  // Ensure a <= b
    if (c > d) swap(c, d);  // Ensure c <= d

    // Check if the intervals [a, b] and [c, d] intersect
    return max(a, c) <= min(b, d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // if (a > b) swap(a, b);  // Ensure a <= b
        // if (c > d) swap(c, d);  // Ensure c <= d

        // if (max(a, c) <= min(b, d)) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }

        if (doIntersect(a, b, c, d) || doIntersect(a + 12, b + 12, c, d) ||
            doIntersect(a, b, c + 12, d + 12) ||
            doIntersect(a + 12, b + 12, c + 12, d + 12)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}