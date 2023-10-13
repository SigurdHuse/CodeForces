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
	int n, m; cin >>n >> m;
	vector<vector<int>> v(n+2, vector<int>(m+2));
	REP(i,n) REP(j,m) cin >> v[i+1][j+1];
	vector<vector<int>> one(n+2, vector<int>(m+2));
	auto two = one;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			one[i][j] = v[i][j] + max(one[i-1][j], one[i][j-1]);
		}
	}
	for(int i = n; i >= 1; --i){
		for(int j = 1; j <= m; ++j){
			two[i][j] = v[i][j] + max(two[])
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

