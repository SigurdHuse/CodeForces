#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	vector<vector<int>> dp(2, vector<int>(n+2,INT_MAX));
	for(auto &a : v) cin >> a;
	
	if(n == 1){
		cout << v[0] << endl;
		return;
	}
	
	dp[1][1] = v[0];
	dp[1][2] = v[0]+v[1];
	
	for(int i = 1; i < n; ++i){
		if(dp[1][i] != INT_MAX){
			dp[0][i+1] = min(dp[0][i+1], dp[1][i]);
			dp[0][i+2] = min(dp[0][i+2], dp[1][i]);
		}
		if(dp[0][i] != INT_MAX){
			dp[1][i+1] = min(dp[0][i]+ v[i], dp[1][i+1]);
			if(i != n-1)dp[1][i+2] = min(dp[0][i] + v[i] + v[i+1], dp[1][i+2]);
		}
	}
	
	//dp[0][n] = min(dp[0][n], dp[1][n-1]);
	//dp[1][n] = min(dp[1][n], dp[0][n-1] + v[n-1]);
	
	//for(int k = 0; k < 2; ++k){
		//for(int j = 0; j < n+2; ++j){
			//cout << dp[k][j] << " ";
		//}
		//cout << endl;
	//}
	//cout << endl;
	
	
	cout << min(dp[0][n], dp[1][n]) << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

