#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;

        long long int total1 = 0, total2 = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if(i < 3) total1 += str[i];
            else total2 += str[i];
        }

        if(total1 == total2){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}