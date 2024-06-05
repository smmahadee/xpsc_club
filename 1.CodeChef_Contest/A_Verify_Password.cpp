#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool isValid = true, isAlpha = false, isDigit = false;
        char lastAlpha = 'a' - 1;
        char lastDigit = '0' - 1;

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                if (isAlpha) {
                    isValid = false;
                    break;
                }
                if (s[i] < lastDigit) {
                    isValid = false;
                    break;
                }
                isDigit = true;
                lastDigit = s[i];
            } else if (isalpha(s[i])) {
                if (isDigit) {
                    isValid = false;
                    break;
                }
                if (s[i] < lastAlpha) {
                    isValid = false;
                    break;
                }
                isAlpha = true;
                lastAlpha = s[i];
            } else {
                isValid = false;
                break;
            }
        }

        cout << (isValid ? "YES" : "NO") << endl;
    }

    return 0;
}
