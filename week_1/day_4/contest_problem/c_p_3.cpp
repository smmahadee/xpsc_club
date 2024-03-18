#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> freqArr;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            arr[i] = value;
            freqArr[value]++;
        }

        bool flag = false;
        int ans = -1; 

        for (int i = 0; i < n; i++) {
            if (freqArr[arr[i]] >= 3) {
                flag = true;
                ans = arr[i];
                break;
            }
        }

        if (flag) {
            cout << ans << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
