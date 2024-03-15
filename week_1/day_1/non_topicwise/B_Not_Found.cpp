#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sumArr[26];
    for (int i = 0; i < 26; i++) {
        sumArr[i] = 0;
    }

    for (int i = 0; i < s.length(); i++) {
        sumArr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (sumArr[i] == 0) {
            char ch = i + 'a';
            cout << ch;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}