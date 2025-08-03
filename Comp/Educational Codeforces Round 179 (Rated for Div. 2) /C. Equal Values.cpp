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
	vector<ll> a(n+1);
	REP(i,n) cin >> a[i];
	
	ll idx = 0, last = a[0];
	ll ans = LLONG_MAX;
	for(ll i = 1;i <= n; ++i){
		if(a[i] != last){
			ll l = idx, r = i-1;
			ll tmp = 0;
			tmp += a[i-1]*l;
			tmp += a[i-1]*(n - r - 1);
			
			ans = min(ans, tmp);
			idx = i;
			last = a[i];
		}
	}
	cout << ans << "\n";
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

