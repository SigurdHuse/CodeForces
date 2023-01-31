#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2*1e5 + 5;

int dist[N];
bool vis[N];
vector<int> G[N];

int search(int cur){
	if(SZ(G[cur]) == 1){
		dist[cur] = 0;
		return 1;
	}
	else{
		for(int next : G[cur]){
			if(vis[next]) continue;
			vis[next] = 1;
			dist[cur] += search(next);
		}
	}
	return dist[cur];
}


void solve(){
	int n, k; cin >> n >> k;
	REP(i,N) dist[i] = 0;
	vis[1] = 1;
	int u, v;
	for(int i = 0; i < n-1; ++i){
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	search(1);
	sort(dist+1, dist + n+1, greater<int>());
	ll ans = 0;
	//for(int i = 1; i <= n; ++i){
		//cout<< dist[i] << " ";
	//}
	//cout<< endl;
	for(int i = 1; i <= k; ++i){
		ans += dist[i];
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

