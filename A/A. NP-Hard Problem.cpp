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

vector<int> G[N], color(N, -1);

void solve(){
	int n, m; cin >> n >> m;
	int u, v;
	for(int i = 0; i < m; ++i){
		cin >> u >> v;
		G[u].emplace_back(v);
		G[v].emplace_back(u);
	}
	
	vector<int> zero, one;
	queue<int> q;
	for(int i = 1; i <= n; ++i){
		if((color[i] != -1) || (G[i].size() == 0)) continue;
		zero.emplace_back(i);
		color[i] = 0;
		q.push(i);
		
		while(q.size()){
			int cur = q.front();q.pop();
			for(int next : G[cur]){
				if(color[next] == color[cur]){
					cout << -1 << endl;
					return;
				}
				else if(color[next] != -1) continue;
				else{
					color[next] = color[cur] ^ 1;
					if(color[next] == 1) one.push_back(next);
					else zero.push_back(next);
					q.push(next);
				}
			}
		}
	}	
	cout << SZ(zero) << endl;
	for(int i : zero) cout << i<< " ";
	cout << endl;
	cout << SZ(one) << endl;
	for(int i : one) cout << i<< " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

