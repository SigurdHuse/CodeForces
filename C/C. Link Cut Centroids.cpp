#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int n, _size[100005], fa[100005], minn = 1e9, cent1, cent2;

vector<int> g[100005];

void dfs(int x, int f){
	fa[x] = f, _size[x] = 1;
	int mx = 0;
	for(int y : g[x]){
		if(y == f) continue;
		dfs(y,x);
		_size[x] += _size[y];
		mx = max(mx, _size[y]);
	}
	mx = max(mx, n - _size[x]);
	if(mx < minn) minn = mx, cent1 = x, cent2 = 0;
	else if(mx == minn) cent2 = x;
}
int S;

void dfs2(int x, int f){
	if(g[x].size() == 1){
		S = x;
		return;
	}
	for(int y : g[x]){
		if(y == f) continue;
		dfs2(y,x);
	}
}

void solve(){
	cin >> n;
	cent1 = 0, cent2 = 0, minn = 1e9;
	for(int i = 1; i <= n; ++i) g[i].clear(), fa[i] = 0;
	for(int i = 1; i < n; ++i){
		int x, y; 
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	if(!cent2){
		cout << "1 " << g[1][0] << "\n";
		cout << "1 " << g[1][0] << endl;
		return;
	}
	if(fa[cent1] != cent2) swap(cent1, cent2);
	dfs2(cent1, cent2);
	cout << S << " " << fa[S] << endl;
	cout << S << " " << cent2 << endl;
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

