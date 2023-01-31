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

void solve(){
	int n; cin >> n;
	vector<int> v(n+1);
	REP(i,2005) REP(j,2005) dp[i][j] = -1;
	REP(i,n) cin >> v[i+1];
	int ans = 0;
	
	dp[0][0] = 0;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j < 2005; ++j){
			if(dp[i-1][j] != -1){
				dp[i][j] = max(dp[i][j], dp[i-1][j]);
				if(dp[i-1][j] + v[i] >= 0){
					dp[i][j+1] = max(dp[i][j+1], dp[i-1][j] + v[i]);
					ans = max(ans, j+1);
				}
				
			}
		}
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

