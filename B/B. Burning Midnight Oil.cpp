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
	ll n, k; cin >> n >> k;
	ll l = 1, r = 1e9;
	ll fac = k;
	ll v = INT_MAX;
	
	if(k == 1){
		cout << 1 << endl;
		return;
	}
	
	while(l < r){
		ll mid = (r - l)/2 + l;
		fac = k;
		ll ans = mid;
		while((mid / fac) > 0){
			ans += mid / fac;
			fac *= k;
		}
		//cout << ans << endl;
		if(ans > n){
			v = min(v, mid);
			r = mid - 1;
		}
		else l = mid + 1;
	}
	for(ll i = max(1ll, v - 10); i < v; ++i){
		fac = k;
		ll ans = i;
		while((i / fac) > 0){
			ans += i / fac;
			fac *= k;
		}
		if(ans >= n){
			cout << i << endl;
			return;
		}
	}
	
	
	cout << v << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

