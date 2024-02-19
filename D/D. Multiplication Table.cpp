#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll f(ll x, ll n, ll m){
	ll res = 0;
	--x;
	for(ll i = 1; i <= n; ++i) res += min(m, x/i);
	return res; 
}

void solve(){
	ll n, m, k; cin >> n >> m >> k;
	ll l = 1, r = n*(m+1);
	
	while(l < r){
		ll x = (l + r) / 2;
		
		if(f(x,n,m) < k){
			l = x + 1;
		}
		else r = x;
	}
	cout << l - 1 << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

