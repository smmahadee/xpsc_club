#include <limits.h>

#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    memset(a, 0, sizeof(a));

    for (int i = 1; i <= n; i++) {
        int value;
        cin >> value;
        a[value]++;
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}