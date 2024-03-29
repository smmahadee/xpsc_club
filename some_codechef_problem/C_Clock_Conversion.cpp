#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time;
        cin >> time;

        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
        string period = (hour >= 12) ? "PM" : "AM";

        if (hour > 12) {
            hour -= 12;
        } else if (hour == 0) {
            hour = 12;
        }

        cout << setfill('0') << setw(2) << hour << ":" << setfill('0')
             << setw(2) << minute << " " << period << std::endl;
    }

    return 0;
}
