#include <bits/stdc++.h> 
using namespace std; 

bool is_beaut(int n){
    vector<bool> mem(10);
    while(n > 0){
        if(mem[n%10]) return 0;
        mem[n%10] = 1;
        n/=10;
    }
    return 1;
}

int main()
{
    int n; 
    cin >> n;
    n++;
    while(!is_beaut(n)) n++;
    cout << n << endl;
}