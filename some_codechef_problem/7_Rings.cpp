#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int total = n * x;

        int count = 0;
        do {
            total /= 10;
            ++count;
        } while (total != 0);

        cout << (count == 5 ? "YES" : "NO") << endl;
    }

    return 0;
}