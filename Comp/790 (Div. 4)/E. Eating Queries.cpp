#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, q; cin >> n >> q;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v),greater<int>());
	for(int i = 1; i< n; ++i){
		v[i] += v[i-1];
	}
	for(int i = 0; i< q; ++i){
		int x; cin >> x;
		if(x > v[n-1]) cout << -1 << endl;
		else cout << (lower_bound(all(v),x) - v.begin()) + 1 << endl;
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

