#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find number of components

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> G(m+1);
	vector<vector<int>> lang(n);
	
	
	int k, a;
	int zero_cnt = 0;
	for(int i = 0; i < n; ++i){
		cin >> k;
		zero_cnt += (k == 0);
		REP(_,k){
			cin >> a;
			G[a].push_back(i);
			lang[i].push_back(a);
		}
	}
	
	vector<bool> vis(n);
	int ans = 0;
	queue<int> q;
	
	for(int i = 0; i <n; ++i){
		if(!vis[i]){
			ans++;
			vis[i] = 1;
			q.push(i);
			
			while(q.size()){
				int cur = q.front(); q.pop();
				
				for(int j : lang[cur]){
					for(int e : G[j]){
						if(!vis[e]){
							vis[e] = 1;
							q.push(e);
						}
					}
				}
				
			}
		}
	}
	cout << (zero_cnt == n ? n : ans -1) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}
