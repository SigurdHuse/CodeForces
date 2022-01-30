#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    string name;
    cin >> name;
    int cnt = 0;
    vector<bool> mem(26);
    for(char c : name){
        if(mem[c - 'a']) continue;
        cnt++;
        mem[c - 'a'] = 1;
    }
    if(cnt % 2) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
}
