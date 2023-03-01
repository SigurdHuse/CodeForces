#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;
ll dp[2][N]; int A[2][N]; vector<int> adj[N];


void DFS(int v, int p = -1){
	dp[0][v] = dp[1][v] = 0;
	for(int u : adj[v]){
		if(u == p) continue;
		DFS(u,v);
		dp[0][v] += max(abs(A[0][v] - A[1][u]) + dp[1][u], dp[0][u] + abs(A[0][v] - A[0][u]));
        dp[1][v] += max(abs(A[1][v] - A[1][u]) + dp[1][u], dp[0][u] + abs(A[1][v] - A[0][u]));
	}
}

void solve(){
	int n; cin >> n;
	for(int i = 1; i <= n; ++i) cin >> A[0][i] >> A[1][i];
	fill(adj+1, adj + n, vector<int>());
	
	for(int i = 1; i < n; ++i){
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
        adj[v].push_back(u);
	}
	DFS(1);
	cout << max(dp[0][1], dp[1][1]) << endl;
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

