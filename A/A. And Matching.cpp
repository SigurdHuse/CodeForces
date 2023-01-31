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
	if(k == n-1){
		cout << -1 << endl;
		return;
	}
	
	vector<bool> seen(n+1);
	vector<pair<int,int>> ans;
	for(int i = 0; i < n; ++i){
		if(seen[i]) continue;
		for(int j = 0; j < n; ++j){
			if(i == j) continue;
			if(k > 0){
				if((i & j) == 1){
					ans.push_back({i,j});
					seen[i] = 1;
					seen[j] = 1;
					k--;
					break;
				}
			}
			else{
				if((i & j) == 0){
					ans.push_back({i,j});
					seen[i] = 1;
					seen[j] = 1;
					k--;
					break;
				}
			}
		}
	}
	for(auto p : ans){
		cout << p.f << " " << p.s  << endl;
	}
	
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

