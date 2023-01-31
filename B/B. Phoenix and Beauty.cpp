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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	if(k == n){
		cout << n<< endl;
		for(int i : v) cout << i<<  " ";
		cout << endl;
		return;
	}
	set<int> seen;
	vector<int> ans;
	
	for(int i = 0; i < n; ++i){
		if(seen.count(v[i])) continue;
		seen.insert(v[i]);
		ans.push_back(v[i]);
	}
	if(SZ(ans) > k){
		cout << -1 << endl;
		return;
	}
	int idx = 0;
	
	while(SZ(ans) < k){
		ans.push_back(v[idx++]);
	}
	
	cout << SZ(ans) * n << endl;
	for(int i = 0; i < n; ++i){
		for(int j : ans) cout << j << " ";
	}
	cout << endl;
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

