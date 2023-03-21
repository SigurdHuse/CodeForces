#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 4, INF = 1e9;

vector<int> d;
vector<vector<int>> G;
int n;


void bfs(int s){
	d = vector<int>(n+1, INF);
	d[s] = 0;
	
	queue<int> q;
	q.push(s);
	
	while(q.size()){
		int v = q.front(); q.pop();
		
		for(auto to : G[v]){
			if(d[to] == INF){
				d[to] = d[v] + 1;
				q.push(to);
			}
		}
	}
}

void solve(){
	int m; cin >> n >> m;
	G = vector<vector<int>>(n+1);
	for(int i = 0; i < m; ++i){
		int x, y; cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	
	bfs(1);
	vector<int> even, odd;
	
	for(int i = 1; i <= n; ++i){
		if(d[i] & 1) odd.push_back(i);
		else even.push_back(i);
	}
	if(SZ(even) < SZ(odd)){
		cout << SZ(even) << endl;
		for(auto v : even) cout << v << " ";
	}
	else{
		cout << SZ(odd) << endl;
		for(auto v : odd) cout << v<< " ";
	}
	cout << endl;
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

