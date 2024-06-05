#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, k;
        cin >> n >> k;

        int countOfElements = 0, weight = 1, numOddSegments;
        while (true) {
            numOddSegments = n / weight;
            numOddSegments -= !(numOddSegments & 1);
            numOddSegments = (numOddSegments + 1) / 2;

            if (countOfElements + numOddSegments >= k) break;

            countOfElements += numOddSegments;
            weight <<= 1;
        }

        cout << ((k - countOfElements) * 2 - 1) * weight << '\n';
    }

    return 0;
}
