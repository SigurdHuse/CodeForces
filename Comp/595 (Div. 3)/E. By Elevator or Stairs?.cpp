#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, c; cin >> n >> c;
	vector<int> a(n-1), b(n-1);
	vector<vector<int>> dp(n, vector<int>(2,INT_MAX));
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	dp[0][0] = 0, dp[0][1] = c;
	
	for(int i = 0; i< n-1; ++i){
		dp[i+1][0] = min(dp[i+1][0], dp[i][1] + a[i]);
		dp[i+1][0] = min(dp[i+1][0], dp[i][0] + a[i]);
		dp[i+1][1] = min(dp[i+1][1], dp[i][1] + b[i]);
		dp[i+1][1] = min(dp[i+1][1], dp[i][0] + b[i]+c);
	}
	for(int i = 0; i < n; ++i){
		cout << min(dp[i][0], dp[i][1]) << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

