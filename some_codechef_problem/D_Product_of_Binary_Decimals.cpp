#include <bits/stdc++.h>

using namespace std;

bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        num /= 10;
    }
    return true;
}

// Function to find all binary decimals that can divide the given number
vector<int> findBinaryDecimals(int n) {
    vector<int> binaryDecimals;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (isBinaryDecimal(i)) {
                binaryDecimals.push_back(i);
            }
            if (i != n / i && isBinaryDecimal(n / i)) {
                binaryDecimals.push_back(n / i);
            }
        }
    }
    return binaryDecimals;
}

// Function to check if it's possible to represent n as a product of binary
// decimals
bool canRepresentAsProduct(int n) {
    vector<int> binaryDecimals = findBinaryDecimals(n);
    return !binaryDecimals.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (canRepresentAsProduct(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
