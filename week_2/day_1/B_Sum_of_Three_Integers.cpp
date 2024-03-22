#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    long long count = 0;

    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            int z = s - x - y;
            if (0 <= z && z <= n) count++;
        }
    }

    cout << count << endl;

    return 0;
}