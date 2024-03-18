#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n];
    long long total = 0;

    for (int i = 0; i < n; i++) {
        long long value;
        cin >> value;

        total += value;
        arr[i] = value;
    }

    if (total % 2 == 0) {
        cout << total << endl;
        return 0;
    }

    long long lessTotal = INT_MIN;

    for (int i = 0; i < n; i++) {
        if ((total - arr[i]) % 2 == 0 && total - arr[i] > lessTotal) {
            lessTotal = total - arr[i];
        }
    }

    cout << lessTotal << endl;

    return 0;
}