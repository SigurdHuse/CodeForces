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

vector<int> G[N];
vector<bool> vis(N);


void solve(){
	int n, m; cin >> n >> m;
	int a,b;
	
	for(int i = 0; i < m; ++i){
		cin >> a >> b;
		G[a].emplace_back(b);
		G[b].emplace_back(a);
	}
	
	priority_queue<int, vector<int>, greater<int>> q;
	q.push(1);
	vis[1] = 1;
	
	while(q.size()){
		int cur = q.top(); q.pop();
		cout << cur << " ";
		
		for(int next : G[cur]){
			if(vis[next]) continue;
			vis[next] = 1;
			q.push(next);
		}
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

