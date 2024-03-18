#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int l = 0, r = 0;

    queue<int> q;

    while (r < n) {
        if (r - l + 1 == k) {
            if (q.empty()) {
                cout << 0 << " ";
            } else {
                cout << q.front() << " ";
                if (a[l] == q.front()) q.pop();
            }
            l++;
            // r++;
            // if(a[r] < 0) q.push(a[r]);
        } else {
            if (a[r] < 0) q.push(a[r]);
            r++;
        }
    }



    return 0;
}