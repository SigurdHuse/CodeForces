#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp, m, l, r;
	cin >> n;
	vector<ll> v(n), u(n);
	for(auto &x : v) cin >> x;
	copy(v.begin(),v.end(),u.begin());
	sort(u.begin(),u.end());
	for(int i = 1; i< n; ++i){
		v[i] += v[i-1];
		u[i] += u[i-1];
	}
	v.insert(v.begin(),0);
	u.insert(u.begin(),0);
	cin >> m;
	REP(i,m){
		cin >> tmp >> l >> r;
		if(tmp == 1) cout << v[r] - v[l-1] << endl;
		else cout << u[r] - u[l-1] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}
