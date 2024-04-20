#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll result = 0;
        for (int i = 0; i < n; i++) {
            result += abs(i - arr[i]);
        }

        cout << result << endl;
    }

    return 0;
}
