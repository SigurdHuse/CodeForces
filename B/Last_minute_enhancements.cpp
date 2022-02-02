#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t, n, tmp;
    cin >> t;
    bitset<1000005> mem;
    for(int i = 0; i < t; i++){
        cin >> n;
        mem.reset();
        int ans = 0;
        for(int j = 0; j < n; j++){
            cin >> tmp;
            if(mem[tmp]) mem[tmp + 1] = 1;
            else mem[tmp] = 1;
            
        }
        //cout << mem << endl;
        cout << mem.count() << endl;
    }
}
