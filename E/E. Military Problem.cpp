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
	int n, Q; cin >> n >> Q;
	vector<vector<int>> G(n+1);
	for(int i = 1; i < n; ++i){
		int p; cin >> p;
		G[p].push_back(i+1);
	}
	stack<int> q, tmp;
	while(Q--){
		int ans = 0;
		int u, k; cin >> u >> k;
		bool flag = 1;
		q.push(u);
		while(q.size()){
			int cur = q.top(); q.pop();
			ans++;
			if(ans == k){
				cout << cur << "\n";
				flag = 0;
				break;
			}
			
			for(int next : G[cur]) q.push(next);
		}
		if(flag) cout << -1 << "\n";
		q = tmp;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

