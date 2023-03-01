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
	ll p, q; cin >> p >> q;
	
	if(p % q != 0){
		cout << p << endl;
		return;
	}
	ll ans = 1;
	bool ok = 0;
	for(ll i = 2; i*i <= q; ++i){
		if(q % i == 0){
			ok = 1;
			ll tmp = p, other = q / i;
			while(tmp % q == 0) tmp /= i;
			ans = max(ans, tmp);
			tmp = p;
			while(tmp % q == 0) tmp /= other;
			ans = max(ans, tmp);
		}
	}
	if(!ok){
		ll tmp = p;
		while(tmp % q == 0) tmp /= q;
		ans = max(ans, tmp);
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

