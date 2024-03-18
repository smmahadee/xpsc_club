// problem link :
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N) {
        int l = 0, r = 0;
        long long sum = 0, ans = 0;

        while (r < N) {
            sum += Arr[r];

            if (r - l + 1 == K) {
                ans = max(ans, sum);
                sum -= Arr[l];
                l++;
                r++;
            } else {
                r++;
            }
        }

        return ans;
    }
};

int main() { return 0; }