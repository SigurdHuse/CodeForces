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
	vector<ll> v(n), cum(n+1);
	for(auto &x : v){
		cin >> x;
	}
	
	for(int i = 1; i <= n; ++i){
		cum[i] = __gcd(cum[i-1], v[i-1]);
	}
	ll r = v[n-1], ans = cum[n-1];
	//REP(i,n+1) cout<< cum[i] << " ";
	//cout << endl;
	
	for(int i = n-2; i >= 0; --i){
		ans = max(ans, __gcd(cum[i], r));
		r = __gcd(r, v[i]);
	}
	r = __gcd(r, v[0]);
	ans = max(ans, r);
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

