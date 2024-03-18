#include <limits.h>

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n];
        long long minValue = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            minValue = min(minValue, a[i]);
        }

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i] - minValue;
        }

        cout << sum << endl;
    }

    return 0;
}