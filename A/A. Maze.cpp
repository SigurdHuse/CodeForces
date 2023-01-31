#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<string> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	vector<vector<bool>> vis(n, vector<bool>(m));
	queue<pair<int,int>> q;
	int s = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(v[i][j] == '.'){
				s++;
				if(q.empty())q.push({i,j});
			}
		}
	}
	int cnt = 0, x, y;
	while(q.size()){
		auto p = q.front(); q.pop();
		if(vis[p.f][p.s]) continue;
		vis[p.f][p.s] = 1;
		cnt++;
		if(cnt == (s - k)) break;
		for(auto dir : dirs){
			y = p.f + dir.f;
			x = p.s + dir.s;
			if((y < 0) || (y >= n)) continue;
			if((x < 0) || (x >= m)) continue;
			if((v[y][x] == '.') && (!vis[y][x])){
				q.push({y,x});
			}	
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if((v[i][j] == '.') && (!vis[i][j])){
				v[i][j] = 'X';
			}
		}
	}
	for(auto &a : v){
		cout << a << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

