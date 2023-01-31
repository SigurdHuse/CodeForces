#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Three distinct maximum integers with no common divisor

void solve(){
	ll n; cin >> n;
	if((n == 1) || (n == 2) || (n ==3)){
		if(n==1)cout << 1 << endl;
		if(n ==2) cout<< 2 << endl;
		if(n == 3) cout << 6 << endl;
		return;
	}
	if(n & 1){
		cout << n*(n-1)*(n-2) << endl;
	}
	else{
		ll ans = (n-1)*(n-2)*(n-3);
		for(ll i = max(1ll, n-50); i <= n; ++i){
			for(ll j = max(1ll, n-50); j <= n; ++j){
				for(ll k = max(1ll, n-50); k <= n; ++k){
					ans = max(ans, lcm(i,lcm(j,k)));
				}
			}
		}
		
		cout <<  ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}
