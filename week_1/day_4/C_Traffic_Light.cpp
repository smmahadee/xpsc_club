#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char ch;
        string str;
        cin >> ch >> str;

        str += str;

        if (ch == 'g') {
            cout << 0 << endl;
            continue;
        }

        bool flag = false;
        int result = 0, count = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'g') {
                flag = false;
                result = max(result, count);
            }

            if (str[i] == ch && flag == false) {
                count = 0;
                flag = true;
            }

            if (flag == true) count++;
        }

        cout << result << endl;
    }

    return 0;
}