#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        ll a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        int l = 0, r = 0;
        int oddCount = 0;
        int ans = 0;

        while(r < n){
            if(a[r] % 2 == 1) oddCount++;

            if(r - l + 1 == k) {
                if(oddCount > 0) ans++;
                if(a[l] % 2 == 1) oddCount--;
                l++;
            }

            r++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}