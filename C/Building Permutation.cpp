#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	ll ans = 0;
	cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin>> x;
	sort(v.begin(),v.end());
	for(int i = 0; i< n; ++i){
		ans += abs(i + 1 - v[i]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

