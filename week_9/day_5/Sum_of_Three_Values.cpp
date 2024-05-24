#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> container;
    for (int i = 0; i < n; i++) {
        container.push_back({a[i], i + 1});
    }

    sort(container.begin(), container.end());

    for (int i = 0; i < n; i++) {
        int lockNum = container[i].first;

        int front = i + 1;
        int rear = n - 1;

        while (front < rear) {
            int sum = lockNum + container[front].first + container[rear].first;

            if (sum == x) {
                cout << container[i].second << " " << container[front].second
                     << " " << container[rear].second << endl;

                return 0;
            } else {
                if (sum < x) {
                    front++;
                } else {
                    rear--;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
