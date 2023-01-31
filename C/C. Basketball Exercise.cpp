#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Pretty straight forward dp problem

void solve(){
	int n; cin >> n;
	vector<ll> one(n), two(n);
	vector<vector<ll>> dp(2, vector<ll>(n));
	for(auto &a : one) cin >> a;
	for(auto &a : two) cin >> a;
	
	dp[0][0] = one[0];
	dp[1][0] = two[0];
	
	for(int i = 1; i < n; ++i){
		dp[0][i] = max(dp[0][i-1], dp[1][i-1]+one[i]);
		dp[1][i] = max(dp[1][i-1], dp[0][i-1] +two[i]);
	}
	cout << max(dp[0][n-1], dp[1][n-1]) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

