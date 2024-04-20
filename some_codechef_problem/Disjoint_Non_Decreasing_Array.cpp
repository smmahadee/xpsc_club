#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        bool flag = true;
        int maxLength = 0;

        for (int i = 1; i < n; i++)
        {
           if(a[i] < a[i-1] ) maxLength = a[i-1] - a[i]; 
        }
        
        
    }

    return 0;
}