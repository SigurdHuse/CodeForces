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
	int n, m; cin >> n >> m;
	int a[n][m];
	REP(i,n) REP(j,m) cin >> a[i][j];
	
	vector<vector<int>> dp(n, vector<int>(1024, -2));
	
	for(int i = 0; i < m; ++i){
		dp[0][a[0][i]] = i;
	}
	for(int i = 1; i < n; ++i){
		for(int j = 0; j < m; ++j){
			for(int k = 0; k <= 1023; ++k){
				if(dp[i-1][k] != -2){
					dp[i][k ^ a[i][j]] = j;
				}
			}
		}
	}
	//for(int i = 0; i < n; ++i){
		//for(int j = 0; j <= 13; ++j) cout << dp[i][j] << " ";
		//cout << endl;
	//}
	
	vector<int> ans;
	for(int j = 1; j <= 1023; ++j){
		if(dp[n-1][j] != -2){
			cout << "TAK" << endl;
			int cur = j;
			//ans.push_back(dp[n-1][j]);
			
			for(int i = n-1; i >= 0; --i){
				ans.push_back(dp[i][cur]);
				cur ^= a[i][dp[i][cur]];
			}
			reverse(all(ans));
			for(int i : ans) cout << i + 1<< " ";
			cout << endl;
			return;
		}
	}
	cout << "NIE" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

