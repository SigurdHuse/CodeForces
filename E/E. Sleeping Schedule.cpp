#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int dp[2005][2005];

void solve(){
	int n, h, l, r; cin >> n >> h >> l >> r;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	memset(dp, -1, sizeof dp);
	dp[0][0] = 0;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < h; ++j){
			if(dp[i][j] != -1){
				if(((j +a[i]) % h >= l) && ((j +a[i]) % h <= r)){
					dp[i+1][(j + a[i])%h] = max(dp[i+1][(j + a[i])%h], dp[i][j] + 1);
				}
				else dp[i+1][(j + a[i])%h] = max(dp[i+1][(j + a[i])%h], dp[i][j]);
				
				if(((j +a[i] - 1 + h) % h >= l) && ((j +a[i] - 1 +h) % h <= r)){
					dp[i+1][(j + a[i] - 1 +h)%h] = max(dp[i+1][(j + a[i] - 1 +h)%h], dp[i][j] + 1);
				}
				else dp[i+1][(j + a[i] - 1 + h)%h] = max(dp[i+1][(j + a[i] - 1 +h)%h], dp[i][j]);
			}
		}
	}
	int ans = 0;
	
	for(int j = 0; j < h; ++j){
		ans = max(ans, dp[n][j]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

