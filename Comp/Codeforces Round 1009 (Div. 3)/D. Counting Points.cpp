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
	int n, m; cin >> n >> m;
	map<ll,ll> cnt;
	
	auto issqrt = [&](ll x){
		ll val = sqrtl(x) + 5;
		while(val*val > x)val--;
		return val;
	};
	vector<ll> a(n), r(n);
	for(ll&i:a)cin>>i;
    for(ll&i:r)cin>>i;
	
	for(int i = 0; i < n; ++i){
		ll aa = a[i], rr = r[i];
		for(ll x = aa-rr; x <= aa+rr; ++x){
			cnt[x]=max(cnt[x], 2*issqrt(rr*rr - (x - aa)*(x-aa)) + 1);
		}
	}
	ll ans = 0;
	for(auto [x, c] : cnt) ans += c;
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

