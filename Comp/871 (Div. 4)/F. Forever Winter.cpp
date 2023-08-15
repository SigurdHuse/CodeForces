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
	
	vector<vector<int>> G(n+1);
	
	REP(i,m){
		int u, v; cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	vector<bool> vis(n+1);
	
	int y = 0, x = 0;
	
	for(int i = 1; i <= n; ++i){
		if(SZ(G[i]) == 1){
			y++;
			vis[i] = 1;
			for(int j : G[i]){
				if(!vis[j]) x++;
				vis[j] = 1;
			}
		}
	}
	if(y == 2) y--;
	
	cout << x << " " << y/x << endl;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

