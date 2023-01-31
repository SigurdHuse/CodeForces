#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> G[n+1];
	int a, b;
	for(int i = 0; i < m; ++i){
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	queue<int> q;
	
	
	for(int i = 1;i <= n; ++i){
		//if(visited[i]) continue;
		vector<bool> visited(n+1);
		visited[i] = 1;
		
		for(int j : G[i]){
			if(!visited[j]) q.push(j);
			visited[j] = 1;
		}
		while(q.size()){
			int cur = q.front(); q.pop();
			for(int next : G[cur]){
				if(!visited[next]){
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

