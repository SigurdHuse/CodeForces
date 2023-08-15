#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<pair<int,int>> dirs = {{1,0}, {0,1}, {-1,0}, {0,-1}};

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	vector<vector<bool>> seen(n, vector<bool>(m));
	
	REP(i,n) REP(j,m) cin >> v[i][j];
	queue<pair<int,int>> q;
	
	ll ans = 0;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(seen[i][j] || v[i][j] == 0) continue;
			
			seen[i][j] = 1;
			q.push({i,j});
			ll tmp = v[i][j];
			
			while(q.size()){
				auto cur = q.front(); q.pop();
				for(auto dir : dirs){
					int y = cur.f + dir.f, x = cur.s + dir.s;
					if(y < 0 || y >= n || x < 0 || x >= m) continue;
					if(seen[y][x]) continue;
					if(v[y][x] == 0) continue;
					seen[y][x] = 1;
					q.push({y,x});
					tmp += v[y][x];
				}
			}
			ans = max(ans, tmp);
		}
	}
	cout << ans << endl;
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

