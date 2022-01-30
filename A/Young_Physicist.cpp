#include <bits/stdc++.h> 
using namespace std; 

int main()
{ 
    int one = 0, two = 0, three =0;
    int n, tmp1, tmp2, tmp3;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        one+= tmp1; 
        two += tmp2;
        three += tmp3;
    }
    if(one == 0 && two == 0 && three == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}