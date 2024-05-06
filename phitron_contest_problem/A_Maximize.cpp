#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int ans = x - 1;  // Initialize ans to x - 1

        // Iterate from x - 2 to 1 to find the maximum possible value of y
        for (int y = x - 2; y >= 1; y--) {
            // Calculate gcd(x, y)
            int commonDivisor = gcd(x, y);
            // Calculate gcd(x, y) + y
            int currentValue = commonDivisor + y;
            // Update ans if currentValue is greater than the current ans
            if (currentValue > ans) {
                ans = currentValue;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
