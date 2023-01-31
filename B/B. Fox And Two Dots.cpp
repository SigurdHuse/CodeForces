#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

struct Node{
	char c;
	pair<int,int> parent = {-1,-1}, cur;
};

vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

void solve(){
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for(auto &a : v) cin >> a;
	
	queue<Node> q;
	Node tmp;
	vector<vector<bool>> vis(n, vector<bool>(m));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(vis[i][j]) continue;
			tmp.parent.f = -1;
			tmp.parent.s = -1;
			tmp.cur.f = i;
			tmp.cur.s = j;
			tmp.c = v[i][j];
			vis[i][j] = 1;
			q.push(tmp);
			
			while(q.size()){
				Node cur = q.front(); q.pop();
				
				for(auto p : dirs){
					int ny = cur.cur.f + p.f, nx = cur.cur.s + p.s;
					if((ny >= n) || (ny < 0)) continue;
					if((nx >= m) || (nx < 0)) continue;
					if(v[ny][nx] != cur.c) continue;
					if((ny == cur.parent.f) && (nx == cur.parent.s)) continue;
					
					if(vis[ny][nx]){
						cout << "Yes" << endl;
						return;
					}
					vis[ny][nx] = 1;
					tmp.cur.f = ny;
					tmp.cur.s = nx;
					tmp.parent.f = cur.cur.f;
					tmp.parent.s = cur.cur.s;
					q.push(tmp);
				}
			}
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

