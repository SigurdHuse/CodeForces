#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int money[] = {1,5,10,20};
    int offset = 0;
    long long int n;
    cin >> n;
    while(n >= 100){
        offset++;
        n -= 100;
    }
    //cout << n << endl;
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i : money){
        for(int j = i; j <= n; j++){
            dp[j] = min(dp[j-i], dp[j])+1;
        }
    }
    //for(int i : dp) cout << i << " ";
    //cout << endl;
    cout << dp[n] +offset  << endl;
}