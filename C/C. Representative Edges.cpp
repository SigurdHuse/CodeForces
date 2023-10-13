#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll sum(ll x){
	ll ans = 0;
	while(x){
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

void solve(){
	ll a, b, c; cin >> a >> b >> c;
	vector<ll> ans;
	for(ll s = 0; s <= 100; ++s){
		ll cur = b*pow(s, a) + c;
		if(cur <= 0) continue;
		//cout << cur << endl;
		if(sum(cur) == s){
			if(cur < 1e9) ans.push_back(cur);
		}
	}
	cout << SZ(ans) << "\n";
	for(auto &x : ans) cout << x << " ";
	cout << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

