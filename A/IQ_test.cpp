#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, tmp, even = 0, odd = 0, last_e, last_o; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> tmp;
        if(tmp % 2){
            odd++;
            last_o = i;
        }
        else{
            even++;
            last_e = i;
        }
    }
    if(odd == 1) cout << last_o << endl;
    else cout << last_e << endl;
}