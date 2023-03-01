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
	int n; cin >> n;
	ll ans = 1, x;
	set<ll> seen;
	REP(i,n){
		cin >> x;
		seen.insert(x);
		ans = lcm(ans, x);
	}
	if(seen.count(ans)) ans *= *seen.begin();
	if(ans <= 0){
		cout << -1 << endl;
		return;
	}
	for(ll i = 2; i*i <= ans; ++i){
		if(ans % i != 0) continue;
		if((!seen.count(i)) || (!seen.count(ans / i))){
			cout << -1 << endl;
			return;
		}
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

