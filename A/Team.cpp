#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, ans = 0, tmp, tmp1; 
    cin >> n;
    for(int i = 0; i < n; i++){
        tmp1 = 0;
        for(int j = 0; j<3;j++){
            cin >> tmp;
            tmp1 += tmp;
        }
        ans += tmp1 >= 2;
    }
    cout << ans << endl;
}