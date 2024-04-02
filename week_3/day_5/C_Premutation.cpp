#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n][n - 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> a[i][j];
            }
        }
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[a[i][n - 2]]++;
        }
        int lastElement;
        for (auto x : m) {
            if (x.second > 1) {
                lastElement = x.first;
                break;
            }
        }
        int rowWhereLastElementNotPreset = -1;
        for (int i = 0; i < n; i++) {
            if (a[i][n - 2] != lastElement) {
                rowWhereLastElementNotPreset = i;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            cout << a[rowWhereLastElementNotPreset][i] << " ";
        }
        cout << lastElement << endl;
    }
    return 0;
}