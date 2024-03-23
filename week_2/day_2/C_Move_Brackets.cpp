#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        stack<int> s;

        for (char c : str) {
            if (c == '(') {
                s.push(c);
            } else {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    s.push(c);
                }
            }
        }

        cout << s.size() / 2 << endl;
    }

    return 0;
}