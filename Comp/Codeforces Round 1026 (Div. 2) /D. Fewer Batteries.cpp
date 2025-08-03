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
	vector<int> b(n);
	for(auto &x : b) cin >> x;
	vector<vector<pair<int,int>>> G(n);
	
	for(int i = 0; i < m; ++i){
		int s, t, w; 
		cin >> s >> t >> w;
		s--; t--;
		G[s].push_back({t,w});
	}
	
	// {cur, mi, mx}
	stack<vector<int>> q;
	
	for(auto p : G[0]){
		if(b[0] >= p.s)q.push({p.f, p.s, b[0]});
	}
	
	int ans = INT_MAX;
	while(q.size()){
		auto cur = q.top(); q.pop();

		if(cur[0] == n-1){
			ans = min(ans, cur[1]); continue;
		}
		for(auto p : G[cur[0]]){
			if(b[cur[0]] + cur[2] >= p.s){
				q.push({p.f, max(p.s, cur[1]), b[cur[0]] + cur[2]});
			}
		}
	}
	cout << (ans == INT_MAX ? -1 : ans) << "\n";
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

