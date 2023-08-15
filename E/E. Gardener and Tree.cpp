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
	int n, k; cin >> n >> k;
	vector<int> G[n];
	vector<int> cnt(n);
	int ans = n;
	for(int i = 0; i < n-1; ++i){
		int u, v; cin >> u >> v;
		u--;v--;
		cnt[u]++;
		cnt[v]++;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	
	queue<int> q, q_next, tmp;
	for(int i = 0; i < n; ++i){
		if(cnt[i] <= 1) q.push(i);
	}
	
	while(k--){
		while(q.size()){
			int u = q.front(); q.pop();
			cnt[u] = -1;
			ans--;
			for(int v : G[u]){
				cnt[v]--;
				if(cnt[v] == 1){
					q_next.push(v);
				}
			}
		}
		if(ans == 0) break;
		q = q_next;
		q_next = tmp;
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

