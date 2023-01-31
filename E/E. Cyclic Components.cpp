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
	int cur, parent= 0;
};

const int N = 200*1000+11;
vector<int> G[N];
bool vis[N];

void solve(){
	int n, m; cin >> n >> m;
	
	int a, b;
	for(int _ = 0; _ < m; ++_){
		cin >> a >> b;
		a--;b--;
		G[a].emplace_back(b);
		G[b].emplace_back(a);
	}
	int ans = 0;
	
	Node tmp, cur;
	stack<Node> q;
	
	for(int i = 0; i < n; ++i){
		if(!vis[i]){
			int start = i;
			bool ok = 1;
			vis[i] = 1;
			tmp.cur = i;
			tmp.parent = -1;
			q.push(tmp);
			
			while(q.size()){
				cur = q.top(); q.pop();
				if(SZ(G[cur.cur]) != 2) ok = 0;
				for(int next : G[cur.cur]){
					if(next == cur.parent) continue;
					if(vis[next]){
						if(next != start) ok = 0;
						continue;
					}
					tmp.parent = cur.cur;
					tmp.cur = next;
					q.push(tmp);
				}
			}
			ans += ok;
		}
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

