#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int longestKSubstr(string s, int k) {
        int l = 0, r = 0, ans = -1;
        int n = s.size();

        map<char, int> freqMap;

        while (r < n) {
            ++freqMap[s[r]];

            while (freqMap.size() > k) {
                --freqMap[s[l]];

                if (freqMap[s[l]] == 0) {
                    freqMap.erase(s[l]);
                }

                l++;
            }

            if (freqMap.size() == k) {
                ans = max(ans, r - l + 1);
            }

            r++;
        }

        return ans;
    }
} int main() {
    
    return 0;
}