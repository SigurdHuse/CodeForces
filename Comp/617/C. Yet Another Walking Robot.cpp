#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s;cin >>s;
	int l = -1, r = n;
	map<pair<int,int>,int> vis;
	pair<int,int> cur = {0,0};
	vis[cur] = 0;
	for(int i = 0; i< n; ++i){
		if (s[i] == 'L') --cur.first;
		if (s[i] == 'R') ++cur.first;
		if (s[i] == 'U') ++cur.second;
		if (s[i] == 'D') --cur.second;
		if(vis.count(cur)){
			if(i - vis[cur] + 1 < r-l+1){
				l = vis[cur];
				r = i;
			}
		}
		vis[cur] = i+1;
	}
	if(l == -1) cout << -1 << endl;
	else cout << l + 1 << " " << r + 1 << endl;
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

