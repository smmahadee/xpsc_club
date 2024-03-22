#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;

            while (c--) {
                char ch;
                cin >> ch;

                if (ch == 'U') {
                    a[i] = a[i] == 0 ? 9 : a[i] - 1;
                } else {
                    a[i] = a[i] == 9 ? 0 : a[i] + 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}