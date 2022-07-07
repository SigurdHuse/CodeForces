#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, n;
	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int> v(n), dp(n);
		for(auto &b : v)cin >> b;
		for(int i = 0; i< n; ++i){
			if(v[i]+ i < n){
				dp[v[i] + i] = max(dp[v[i] + i],dp[i] + v[i]);
			}
			else dp[i] += v[i];
		}
		cout << *max_element(dp.begin(),dp.end()) << endl;
	}
}
