#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll dp[2000][2000];

vector<pair<int,int>> v(1e6 + 5);

void fill(){
	ll cur = 1;
	REP(i, 2000) dp[0][i] = 0;
	
	dp[0][0] = 1;
	v[1] = {0,0};
	cur++;
	
	for(int i= 1; i < 1500; ++i){
		for(int j = 0; j < i+1; ++j){
			v[cur] = {i,j};
			dp[i][j] = cur*cur;
			if(j  > 0){
				dp[i][j] += dp[i-1][j-1];
			}
			if(j < i){
				dp[i][j] += dp[i-1][j];
			}
			if(j > 0 && j < i && i > 1){
				dp[i][j] -= dp[i-2][j-1];
			}
			cur++;
			if(cur > 1e6) return;
		}
	}
	//for(int i = 0; i < 10; ++i){
		//for(int j = 0; j < i+1; ++j){
			//cout << dp[i][j] << " ";
		//}
		//cout << endl;
	//}
}

void solve(){
	int n; cin >> n;
	int x = v[n].f, y = v[n].s;
	
	cout << dp[x][y] << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill();
	while(tt--){
		solve();
	}
}

