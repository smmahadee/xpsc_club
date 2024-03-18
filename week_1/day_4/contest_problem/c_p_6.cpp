#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int arr[n];
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int left = 0, right = n - 1, operations = 0;

    while (left <= right) {
        if (arr[left] > arr[right]) {
            total -= arr[left];
            left++;
            operations++;

            if (total == s) {
                cout << operations << endl;
                break;
            }
        } else if (arr[right] > arr[left]) {
            total -= arr[right];
            right--;
            operations++;

            if (total == s) {
                cout << operations << endl;
                break;
            }
        } else {
            while (arr[left] == arr[right]) {
                total -= arr[left];
                total -= arr[right];
                left++;
                right--;
                operations++;

                if (total == s) {
                    cout << operations << endl;
                    break;
                }
            }
        }
    }

    return 0;
}