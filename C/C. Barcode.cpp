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
	int n, m, x, y; cin >> n >> m >> x >> y;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	
	vector<int> b(m), w(m);
	
	for(int j = 0; j < m; ++j){
		int black = 0, white = 0;
		for(int i = 0; i < n; ++i){
			if(v[i][j] == '#') black++;
			else white++;
		}
		w[j] = white;
		b[j] = black;
	}
	
	
	vector<vector<int>> dp(2, vector<int>(m+1, INT_MAX));
	dp[0][0] = 0;
	dp[1][0] = 0;
	
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

