#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, k, ans = 0, tmp, tmp1;
    cin >> n >> k;
    for(int i = 0; i < k-1; i++){
        cin >> tmp;
        ans += tmp > 0; 
    }
    cin >> tmp;
    if(tmp > 0){
        ans ++;
        for(int i = k; i< n; i++){
            cin >> tmp1;
            if(tmp1 != tmp) break;
            else ans ++;
        }
    }
    cout << ans << endl;
}