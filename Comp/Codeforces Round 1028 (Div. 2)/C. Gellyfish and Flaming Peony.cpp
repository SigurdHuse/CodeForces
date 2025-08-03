#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int min_steps, n;


const int N = 5000 + 5;
int g[N][N] = {};

void dfs(int start, int steps, int cur, int gcd, vector<int> &v){
	if(steps > min_steps) return;
	if(cur < gcd) return;
	if(cur == gcd){
		min_steps = min(steps, min_steps);
		return;
	}
	for(int j = 0; j < n; ++j){
		if(j == start || v[j] % cur == 0) continue;
		dfs(start, steps+1, g[cur][v[j]], gcd, v);
	}
}

void solve(){
	min_steps = 1e9;
	cin >> n;
	vector<int> v(n); 
	for(auto &x : v) cin >> x;
	int gcd = v[0];
	for(int i = 1; i < n; ++i){
		gcd = g[gcd][v[i]];
	}
	
	for(int i = 0; i < n; ++i){
		dfs(i, 0, v[i], gcd, v);
	}
	
	int ans = n + min_steps;
	if(min_steps > 0) ans--;
	for(int i = 0; i < n; ++i){
		if(v[i] == gcd) ans--;
	}
	cout << ans << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	for(int x = 0 ; x < N ; x ++) g[x][0] = g[0][x] = g[x][x] = x;
	for(int x = 1 ; x < N ; x ++) for(int y = 1 ; y < x ; y ++) g[x][y] = g[y][x] = g[y][x % y];
	while(tt--){
		solve();
	}
}

