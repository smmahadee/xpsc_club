#include <iostream>
#include <string>

using namespace std;

int main() {
    string pat, txt;
    cin >> txt >> pat;

    int freqPat[26] = {0};

    for (char c : pat) {
        int index = c - 'a';
        freqPat[index]++;
    }

    int l = 0, r = 0;
    int total = 0;

    int freqTxt[26] = {0};

    while (r < txt.size()) {
        int freqIndex = txt[r] - 'a';
        freqTxt[freqIndex]++;

        if (r - l + 1 == pat.size()) {
            bool flag = true;
            for (int i = 0; i < 26; i++) {
                if (freqPat[i] != freqTxt[i]) {
                    flag = false;
                    break;
                }
            }

            if (flag) total++;

            freqTxt[txt[l] - 'a']--;
            l++;
        }

        r++;
    }

    cout << total << endl;

    return 0;
}
