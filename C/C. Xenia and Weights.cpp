#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 1005;

const int numbers = 10*M;

int dp[M][numbers][3];

void solve(){
	string s; cin >> s;
	int m; cin >> m;
	vector<int> pos;
	for(int i = 0; i < 10; ++i){
		if(s[i] == '1') pos.push_back(i+1);
	}
	
	
	memset(dp, -1, sizeof dp);
	
	dp[0][0][0] = 0;
	dp[0][0][1] = 0;
	dp[0][0][2] = 0;
	
	for(int i = 1; i <= m; ++i){
		if(i & 1){
			for(int j = 0; j <= 10*i; ++j){
				if(dp[i-1][j][0] == -1) continue;
				for(int k : pos){
					if((dp[i-1][j][0] + k > dp[i-1][j][1]) && (dp[i-1][j][2] != k)){
						dp[i][j+k][0] = dp[i-1][j][0] + k;
						dp[i][j+k][1] = dp[i-1][j][1];
						dp[i][j+k][2] = k;
					}
				}
			}
		}
		else{
			for(int j = 0; j <= 10*i; ++j){
				if(dp[i-1][j][0] == -1) continue;
				for(int k : pos){
					if(dp[i][j+k][1] != -1) continue;
					if((dp[i-1][j][1] + k > dp[i-1][j][0]) && (dp[i-1][j][2] != k)){
						dp[i][j+k][1] = dp[i-1][j][1] + k;
						dp[i][j+k][0] = dp[i-1][j][0];
						dp[i][j+k][2] = k;
					}
				}
			}
		}
	}
	vector<int> ans(m);
	for(int j = 0; j < numbers; ++j){
		if(abs(dp[m][j][0] - dp[m][j][1]) > 0){
			cout << "YES" << endl;
			int cur = j;
			for(int i = m; i> 0; --i){
				ans[i-1] = dp[i][cur][2];
				cur -= dp[i][cur][2];
			}
			for(int i : ans) cout << i << " ";
			cout << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

