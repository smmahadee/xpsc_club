#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long sum;
    cin >> n >> sum;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0, ans = 0;

    long long curSum = 0;

    while (r < n) {
        curSum += arr[r];
        if (curSum <= sum) {
            ans = max(ans, r - l + 1);
            r++;
        } else {
            curSum -= arr[l];
            l++;
            r++;
        }
    }

    cout << ans << endl;

    return 0;
}