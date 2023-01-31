#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll dp[2005][2005];

const ll M = 1e9 + 7;

void solve(){
	int n, k; cin >> n >> k;
	//int cnt = 0;
	//for(auto v : fac){
		//cout << cnt << endl;
		//cnt++;
		//for(int i : v) cout << i << " ";
		//cout << endl;
	//}
	
	for(int i = 1; i <= n; ++i){
		dp[1][i] = 1;
	}
	
	for(int j = 2; j <= k; ++j){
		for(int l = 1; l <= n; ++l){
			for(int i = l; i<=n; i += l){
				dp[j][l] = (dp[j][l] + dp[j-1][i])%M; 
			}
		}
	}
	ll ans = 0;
	
	//for(int i = 1; i <= k; ++i){
		//for(int j = 1; j <= n;++j){
			//cout << dp[i][j] << " ";
		//}
		//cout << endl;
	//}
	
	for(int j = 1; j <= n; ++j){
		ans = (ans + dp[k][j]) % M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

