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
	vector<string> v(2);
	for(auto &a : v) cin >> a;
	vector<vector<bool>> dp(2, vector<bool>(n+1));
	dp[0][0] = 1;
	
	set<char> straight = {'1', '2'};
	set<char> bent = {'3','4','5','6'};
	
	for(int i = 0; i < n; ++i){
		if(dp[0][i]){
			if(straight.count(v[0][i])){
				dp[0][i+1] = 1;
			}
			else{
				if(bent.count(v[1][i])){
					dp[1][i+1] = 1;
				}
			}
		}
		else if(dp[1][i]){
			if(straight.count(v[1][i])){
				dp[1][i+1] = 1;
			}
			else{
				if(bent.count(v[0][i])){
					dp[0][i+1] = 1;
				}
			}
		}
		else{
			cout << "NO" << endl;
			return;
		}
	} 
	//for(int i = 0; i < 2; ++i){
		//for(int j = 0; j <= n; ++j) cout << dp[i][j];
		//cout << endl;
	//}
	cout << (dp[1][n] ? "YES" : "NO") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}	

