#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n-1);
	vector<pair<int,int>> tree(n+1);
	for(auto &a : v) cin >> a;
	string s; cin >> s;
	for(int i = n; i > 0; --i){
		if(s[i] == 'W') tree[v[i]].first++;
		else tree[v[i]].second++;
	}
	if(s[0] == 'W') tree[1].first++;
	else tree[1].second++;
	int ans = 0;
	for(auto p : tree){
		if(p.second == p.first && p.first != 0) ans++;
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

