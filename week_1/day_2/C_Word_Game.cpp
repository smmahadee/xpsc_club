#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int count;
        cin >> count;

        map<string, int> freq;
        vector<string> persons[3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < count; j++) {
                string str;
                cin >> str;
                freq[str]++;
                persons[i].push_back(str);
            }
        }

        int personsPoints[3] = {0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < persons[i].size(); j++) {
                if (freq[persons[i][j]] == 1) {
                    personsPoints[i] += 3;
                }
                if (freq[persons[i][j]] == 2) {
                    personsPoints[i] += 1;
                }
            }
        }

        cout << personsPoints[0] << " " << personsPoints[1] << " "
             << personsPoints[2] << endl;
    }
    return 0;
}