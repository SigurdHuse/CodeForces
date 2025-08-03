#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 25000 + 5;
int sta = -1;
bool flag = false;

vector<array<ll,2>> G[N];
vector<int> parent(N, -1);

vector<ll> cost(N, 0);

void dfs(int start, int cur, ll c){
	if(flag) return;
	if(cur == start){
		if(c < cost[start]) flag = true;
		sta = start;
		return;
	}
	
	for(auto &next : G[cur]){
		if(next[1] == parent[cur] || flag) continue;
		if(parent[next[1]] != -1){
			parent[next[1]] = cur;
			cost[next[1]] = c + next[0];
			dfs(next[1],next[1], c + next[0]); continue;
		}
		parent[next[1]] = cur;
		dfs(start, next[1], c + next[0]);
	}
}


void solve(){
	int n, m; cin >> n >> m;
	ll a, b, x;
	for(int i = 0; i < m; ++i){
		cin >> a >> b >> x;
		a--;b--;
		G[a].push_back({x,b}); 
	}	
	
	for(int i = 0; i <= n; ++i){
		if(parent[i] != -1) continue;
		for(auto &next : G[i]){
			parent[next[1]] = i;
			dfs(i, next[1], 0);
			cost[i] = 0;
			if(flag){
				break;
			}
		}
		if(flag) break;
	}
	
	
	if(sta == -1){
		cout << "NO\n"; return;
	}
	vector<int> ans;
	ans.push_back(sta);
	int cur = parent[sta];
	while(cur != sta){
		ans.push_back(cur);
		cur = parent[cur];
	}
	ans.push_back(sta);
	cout << "YES" << endl;
	for(auto &e: ans) cout << e + 1<< " ";
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

