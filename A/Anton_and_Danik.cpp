#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int one = 0, two = 0;
    cin >> one;
    one = 0;
    string s;
    cin >> s;
    for(char c : s){
        if(c == 'A') one++;
        else two++;
    }
    if(one == two) cout << "Friendship" <<endl;
    else if(one > two) cout << "Anton" << endl;
    else cout << "Danik" << endl;
}