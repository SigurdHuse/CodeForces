#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll factorial(ll x){
	if(x == 0 || x == 1) return 1;
	return factorial(x-1) * x;
}

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	
	ll fac = v[0];
	for(int i = 1; i < n; ++i){
		fac = __gcd(v[i], fac);
	}
	
	int ans = 0;
	
	for(ll i = 1; i*i <= fac; ++i){
		if(fac % i == 0){
			ans++;
			if(i != fac / i) ans++;
		}
	}
	
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

