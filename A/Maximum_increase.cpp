#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN, cnt = 0, ans = 0, cur;
    for(int i = 0; i<n; i++){
        cin >> cur;
        if(cur > mx){
            cnt++;
        }
        else{
            cnt = 1;
        }
        mx = cur;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}