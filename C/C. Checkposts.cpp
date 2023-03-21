#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 1e9 + 7, mx = 200000;
vector<int> edge[mx];

int low[mx], dtime[mx], dfstime, _stack[mx], _size, comp[mx], comps;
bool instack[mx];

int mini[mx], cnt[mx], cost[mx];

void tarjan(int u){
	low[u] = dtime[u] = ++dfstime;
	_stack[_size++] = u;
	instack[u] = true;
	
	for(int i = 0; i < SZ(edge[u]); ++i){
		int v = edge[u][i];
		if(dtime[v] == -1){
			tarjan(v);
			low[u] = min(low[u], low[v]);
		}
		else if(instack[v]){
			low[u] = min(low[u], dtime[v]);
		}
	}	
	if(dtime[u] == low[u]){
		comps++;
		int v = -1;
		do{
			v = _stack[--_size];
			instack[v] = false;
			comp[v] = comps;
		}while(u != v);
	}
}

void scc(int n){
	comps = dfstime = _size = 0;
	memset(dtime, -1, sizeof dtime);
	memset(low, 0, sizeof low);
	memset(_stack, 0, sizeof _stack);
	memset(comp, 0, sizeof comp);
	memset(instack, 0, sizeof instack);
	REP(i,n) if(dtime[i] == -1) tarjan(i);
}

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> cost[i];
	
	int m; cin >> m;
	while(m--){
		int u, v;
		cin >> u >> v;
		u--, v--;
		edge[u].push_back(v);
	}
	scc(n);
	for(int i = 1; i <= comps; ++i) mini[i] = INT_MAX;
	
	REP(i,n){
		int c = comp[i];
		int w = cost[i];
		if(mini[c] > w) mini[c] = w, cnt[c] = 1;
		else if(mini[c] == w) cnt[c]++;
	}
	
	ll a = 0, b = 1;
	for(int i = 1; i<= comps; ++i){
		a += mini[i];
		b *= ll(cnt[i]);
		b %= M;
	}
	cout << a << " " << b << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

