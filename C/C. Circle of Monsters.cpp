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
	vector<ll> a(n), b(n);
	REP(i,n) cin >> a[i] >> b[i];
	
	ll needed = 0;
	for(int i = 0; i < n; ++i){
		needed += max(0ll, a[i] - b[(i-1+n)%n]);
	}
	//cout << needed << endl;
	//ll mx = INT_MIN, cur_a = 0, cur_b = 0;
	ll ans = LLONG_MAX;
	for(int i = 0; i < n; ++i){
		ans = min(ans, needed - max(0ll,a[i] - b[(i-1+n)%n]) + a[i]);
	}
	//needed -= cur_a - cur_b;
	//needed += cur_a;
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

