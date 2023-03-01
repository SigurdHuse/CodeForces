#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// We always go as far as possible then alternate

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	
	for(auto &a : v) cin >> a;
	ll ans = LLONG_MAX;
	ll cur = 0;
	
	int x = 0, y = 0;
	
	for(int i = 0; i < n-1; ++i){
		if(i & 1){
			ans = min(ans, cur + (n - y)*v[i] + (n - x)*v[i+1]);
			y++;
		}
		else{
			ans = min(ans, cur + (n - y)*v[i+1] + (n - x)*v[i]);
			x++;
		}
		cur += v[i];
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

