#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int cond = 0;
    string s;
    cin >> s;
    for(char c: s){
        if(c == 'h'){
            if(cond == 0) cond ^= 1;
        }
        else if(c == 'e'){
            if(cond == 1) cond ^= 2;
        }
        else if(c == 'l'){
            if(cond == 3) cond ^= 4;
            else if(cond == 7) cond ^= 8;
        }
        else if(c == 'o'){
            if(cond == 15) cond ^= 16;
        }
        //cout << c << " " << cond << endl;
    }
    s = (cond == 31) ? "YES" : "NO";
    cout << s << endl;
}