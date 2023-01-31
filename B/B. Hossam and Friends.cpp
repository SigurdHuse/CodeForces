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
	map<int,int> used;
	vector<vector<int>> G(n+1);
	int x, y;
	for(int i = 0; i < m; ++i){
		cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	int l = 1;
	ll ans = 0;
	for(int r = 1; r <= n; ++r){
		//cout << l << " " << r << endl;
		
		while(used[r]){
			for(int j : G[l]){
				used[j]--;
			}
			l++;
		}
		for(int j: G[r]){
			used[j]++;
		}
		ans += r - l + 1;
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

