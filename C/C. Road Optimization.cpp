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
	int n, l, k; cin >> n >> k >> l;
	int d[n+1];
	for(int i = 0; i < n; ++i) cin >> d[i];
	
	int a[n+1];
	for(int i = 0; i < n; ++i) cin >> a[i];
	
	d[n] = l;
	a[n] = 0;
	
	int dp[n+1][k+1];
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= k; ++j){
			dp[i][j] = i != 0 ? INT_MAX : 0;
		}
	}
	
	for(int i = 1; i <= n; ++i){
		for(int j = i - 1; j >= 0; --j){
			int need_k = i - j - 1;
			if(need_k > k) break;
			
			for(int al = 0; al <= k - need_k; ++al){
				dp[i][al + need_k] = min(dp[i][al + need_k], dp[j][al] + a[j] * (d[i] - d[j]));
			}
			
		}
	}
	int ans = INT_MAX;
	
	for(int i = 0; i <= k; ++i) ans = min(ans, dp[n][i]);
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

