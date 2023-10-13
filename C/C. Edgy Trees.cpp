#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9+7, N = 2e5 + 5;

bool vis[N];
vector<ll> G[N];
int sz = 0;

ll fast_pow(ll n, ll k){
	ll ans = 1;
	while(k){
		if(k & 1) ans = (ans * n) % M;
		n = (n*n) % M;
		k /= 2;
	}
	return ans;
}

void dfs(int u){
	if(vis[u]) return;
	sz++;
	vis[u] = 1;
	for(auto &it : G[u]) dfs(it);
}

void solve(){
	ll n, k; cin >> n >> k;
	ll ans = fast_pow(n,k);
	for(int i = 0; i < n-1; ++i){
		int u, v;
		bool x;
		cin >> u >> v >> x;
		if(x == 0){
			G[u].push_back(v);
			G[v].push_back(u);
		}
	}
	for(int i = 1; i <= n; ++i){
		if(vis[i]) continue;
		sz = 0;
		dfs(i);
		ans -= fast_pow(sz, k);
		ans += M;
		ans %= M;
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

