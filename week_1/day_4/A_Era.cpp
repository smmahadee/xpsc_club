#include <limits.h>

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        long long operations = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i] > i) {
                operations = max(operations, arr[i] - i);
            }
        }

        cout << operations << endl;
    }

    return 0;
}