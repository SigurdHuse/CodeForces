#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int color[N], n, curr_color;

vector<int> G[N];

bool ok;

void dfs(int v, int parent){
	ok = ok && (color[v] == curr_color);
	for(int i = 0; i < SZ(G[v]); ++i){
		if(G[v][i] != parent){
			dfs(G[v][i], v);
		}
	}
}

bool solve1(int v){
	int ans = true;
	for(int i = 0; i < SZ(G[v]); ++i){
		curr_color = color[G[v][i]];
		ok = true;
		dfs(G[v][i], v);
		ans = ans && ok;
	}
	return ans;
}

void solve(){
	cin >> n;
	for(int i = 0; i < n-1; ++i){
		int u, v; cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	REP(i,n) cin >> color[i+1];
	int root1 = -1, root2 = -1;
	for(int i = 1; i <= n; ++i){
		for(auto elem : G[i]){
			if(color[elem] != color[i]){
				root1 = elem;
				root2 = i;
			}
		}
	}
	if(root1 == -1){
		cout << "YES\n1";
		return;
	}
	bool res1 = solve1(root1);
	bool res2 = solve1(root2);
	
	if(res1){
		cout << "YES\n" << root1;
	}
	else if(res2){
		cout << "YES\n" << root2;
	}
	else{
		cout << "NO" << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

