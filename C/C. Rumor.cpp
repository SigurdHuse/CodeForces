#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find smallest element in each component of graph

void solve(){
	int n, m; cin >> n >> m;
	ll ans = 0;
	vector<int> c(n);
	for(auto &a : c) cin >> a;
	
	vector<vector<int>> G(n);
	int x, y;
	for(int i= 0; i < m; ++i){
		cin >> x >> y;
		x--; y--;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	
	
	vector<bool> vis(n);
	
	for(int i = 0; i < n; ++i){
		if(!vis[i]){
			int mi = c[i];
			vis[i] = 1;
			stack<int> q;
			q.push(i);
			
			while(q.size()){
				int cur = q.top(); q.pop();
				for(int u : G[cur]){
					if(!vis[u]){
						mi = min(mi, c[u]);
						vis[u] = 1;
						q.push(u);
					}
				}
			}
			ans += mi;
		}
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

