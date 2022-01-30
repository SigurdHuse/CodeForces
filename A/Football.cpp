#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    string s;
    cin >> s;
    int one= 0, zero = 0;
    for(char c : s){
        if(c == '1'){
            zero = 0;
            one++;
        }
        else{
            one = 0;
            zero++;
        }
        if(one == 7 || zero == 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}