#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    if (x - 18 >= y) {
        cout << "RCB" << endl;
    } else {
        cout << "CSK" << endl;
    }

    return 0;
}