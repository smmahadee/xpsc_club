#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            if ((str[i] == 'R' && str[i + 1] == 'B') ||
                (str[i] == 'B' && str[i + 1] == 'R')) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
