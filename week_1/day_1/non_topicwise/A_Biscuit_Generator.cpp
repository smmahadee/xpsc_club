#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;

    int divideTimes = (t + 0.5) / a;
    cout << divideTimes * b;

    return 0;
}