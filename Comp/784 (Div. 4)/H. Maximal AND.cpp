#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >>k;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	ll ans = v[0];
	for(int i = 1; i < n; ++i){
		ans &= v[i];
	}
	ll fac = 1;
	fac <<= 30;
	while(k >= n && fac > 0){
		while((ans & fac) == fac){
			fac >>= 1;
		}
		ans += fac;
		k -= n;
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

