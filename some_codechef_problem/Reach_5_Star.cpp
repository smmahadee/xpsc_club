#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (y < 0) {
        cout << "NO" << endl;
    } else {
        cout << ((x + y) >= 2000 ? "YES" : "NO") << endl;
    }

    return 0;
}