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
	vector<int> cats(n+1);
	REP(i,n) cin >> cats[i+1];
	int a, b;

	for(int i = 0; i < n-1; ++i){
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	vector<int> dist(n+1, INT_MAX);
	dist[1] = cats[1];
	set<int> leafs;
	stack<int> q;
	q.push(1);
	
	vector<bool> seen(n+1);
	
	while(q.size()){
		int cur = q.top(); q.pop();
		//cout << cur << " "<< cats[cur] << endl;
		seen[cur] = 1;
		if(dist[cur] > m) continue;
		if(SZ(G[cur]) == 1){
			leafs.insert(cur);
		}
		for(int next : G[cur]){
			if(seen[next]) continue;
			if(cats[next]) dist[next] = dist[cur] + cats[next];
			else dist[next] = 0;
			q.push(next);
		}
	}
	int ans = 0;
	for(int i : leafs){
		//cout << i << endl;
		if((dist[i] <= m) && (i != 1)) ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

