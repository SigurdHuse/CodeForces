#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 1e9 + 7;

void solve(){
	int n, x; cin >> n >> x;
	vector<int> a(n+1);
	vector<vector<int>> dp(n+1, vector<int>(1 << 6, 0));
	
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		for(int mask = 0; mask < (1<<6); ++mask){
			dp[i][mask] += dp[i-1][mask];
			dp[i][mask] %= M;
			
			dp[i][mask & a[i]] += dp[i-1][mask];
			dp[i][mask & a[i]] %= M;
		}
		dp[i][a[i]] = (dp[i][a[i]] + 1) % M;
	}
	int ans = 0;
	for(int mask = 0; mask < (1 << 6); ++mask){
		if(__builtin_popcount(mask) == x) {
            ans = (ans + dp[n][mask]) % M;
        }
	}
	
	cout << ans << endl;
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

