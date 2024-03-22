#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;

        if (val != x) a.push_back(val);
    }

    if (a.size() == 0) {
        cout << "" << endl;
        return 0;
    }

    for (long long val : a) cout << val << " ";

    return 0;
}