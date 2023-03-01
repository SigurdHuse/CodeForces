#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll a[5005], n, m, k, dp[5005][5005];

ll solve(ll i, ll cnt){
	if(dp[i][cnt] != -1) return dp[i][cnt];
	
	if(i > (n-m) || cnt >= k) return 0;
	
	ll opt1 = 0, opt2 = 0;
	
	for(int v = i; v < i+m; ++v){
		opt1 += a[v];
	}
	
	opt1 = opt1 + solve(i + m, cnt + 1);
	opt2 = solve(i+1, cnt);
	
	return dp[i][cnt] = max(opt1, opt2);
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m >> k;
	memset(dp, -1, sizeof dp);
	REP(i,n) cin >> a[i];
	
	cout << solve(0,0) << endl;
}

