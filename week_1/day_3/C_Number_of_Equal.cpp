#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int r = 0, l = 0;
    long long ans = 0;

    while (l < n && r < m) {
        int count1 = 0, count2 = 0, curr = a[l];

        while (a[l] == curr && l < n) {
            count1++;
            l++;
        }

        while (b[r] < curr && r < m) r++;

        while (b[r] == curr && r < m) {
            count2++;
            r++;
        }

        ans += (1LL * count1 * count2);
    }

    cout << ans << '\n';

    return 0;
}