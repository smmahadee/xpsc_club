#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c, v;
        cin >> c >> v;

        if ((c - v) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
