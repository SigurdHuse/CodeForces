#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    unordered_map<string,int> mem;
    int n;
    string name;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> name;
        mem[name]++;
        if(mem[name] == 1){
            cout << "OK" << endl;
        }
        else{
            cout << name + to_string(mem[name]-1) << endl;
        } 
    }
}