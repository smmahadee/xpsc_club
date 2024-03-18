#include <iostream>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    int count = 0;

    while (n <= m) {
        n *= 2;
        count++;
    }

    cout << count;

    return 0;
}