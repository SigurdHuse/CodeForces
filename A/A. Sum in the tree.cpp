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
	int n; cin >> n;
	vector<int> parent(n+1), s(n+1), ans(n+1);
	vector<vector<int>> G(n+1);
	for(int i = 2; i <= n; ++i) cin >> parent[i];
	for(int i = 2; i <= n; ++i){
		G[parent[i]].push_back(i);
	}
	for(int i = 1; i <= n; ++i) cin >> s[i];
	
	// Number and sum
	queue<pair<int,int>> q;
	//ans[1] = s[1];
	q.push({1,0});
	
	while(q.size()){
		auto cur = q.front(); q.pop();
		if(s[cur.f] == -1){
			int mi = INT_MAX;
			for(auto &next : G[cur.f]){
				mi = min(s[next], mi);
			}
			if(mi == INT_MAX){
				ans[cur.f] = 0;
				s[cur.f] = cur.s;
			}
			else{
				if(mi < cur.s){
					cout << "-1\n";
					return;
				}
				ans[cur.f] = mi - cur.s;
				s[cur.f] = cur.s + ans[cur.f];
			}
		}
		else{
			if(s[cur.f] < cur.s){
				cout << "-1\n";
				return;
			}
			ans[cur.f] = s[cur.f] - cur.s;
		}
		
		for(auto &next : G[cur.f]){
			q.push({next, s[cur.f]});
		} 
	}
	//for(auto &x : ans) cout << x << " ";
	//cout << "\n";
	cout << accumulate(all(ans), 0ll) << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

