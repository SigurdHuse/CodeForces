#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, a, b, c; 
    cin >> n >> a >> b >> c;
    int dp[n + 1] = {0};
    for(int i : {a,b,c}){
        dp[i] = max(dp[i], 1);
        for(int j = 0; j<= n - i; j++){
            if(dp[j]) dp[j + i] = max(dp[j + i], dp[j] + 1);
        }
    }
    //for(int i : dp) cout << i << " ";
    //cout << endl;
    cout << dp[n] << endl;
}