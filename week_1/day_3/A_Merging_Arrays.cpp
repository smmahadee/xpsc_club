#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l = 0, r = 0;

    while (l < n && r < m) {
        if (a[l] < b[r]) {
            cout << a[l++] << " ";
        } else if (a[l] > b[r]) {
            cout << b[r++] << " ";
        } else {
            cout << a[l++] << " ";
            cout << b[r++] << " ";
        }
    }

    while (l < n) cout << a[l++] << " ";
    while (r < m) cout << b[r++] << " ";

    return 0;
}