#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Optimal to try to let each guest eat one snack

const int N = 1e5 + 5;

vector<vector<pair<int,int>>> G(N);

bool seen[N], taken[N];

void solve(){
	int n, k; cin >> n >> k;
	
	vector<pair<int,int>> v(k);
	REP(i,k){
		int x,y; cin >> x >> y;
		G[x].push_back({y, i});
		G[y].push_back({x,i});
		v[i] = {x,y};
	}
	
	
	memset(taken, false, sizeof taken);
	memset(seen, false, sizeof seen);
	//sort(all(v));
	int ans = 0;
	
	queue<int> q;
	for(int i = 0; i < k; ++i){
		if(taken[i]) continue;
		taken[i] = 1;
		if(seen[v[i].f] && seen[v[i].s]){
			cout << v[i].f << " " << v[i].s << endl;
			ans++;
			continue;
		}
		if(!seen[v[i].f]){
			q.push(v[i].f);
			seen[v[i].f] = 1;
		}
		if(!seen[v[i].s]){
			q.push(v[i].s);
			seen[v[i].s] = 1;
		}
		
		while(q.size()){
			int cur = q.front(); q.pop();
			for(auto p : G[cur]){
				if(taken[p.s]) continue;
				taken[p.s] = 1;
				
				if(seen[p.f]){
					//cout << p.s << endl;
					ans++;
					continue;
				}
				seen[p.f] = 1;
				q.push(p.f);
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

