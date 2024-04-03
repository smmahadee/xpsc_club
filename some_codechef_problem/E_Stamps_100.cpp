#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n - 2; i++) {
            if (s[i] == '1' & s[i + 1] == '1') {
                s[i] = '1';
                s[i + 1] = 0;
            }
        }

        cout << s << endl;
    }

    return 0;
}
