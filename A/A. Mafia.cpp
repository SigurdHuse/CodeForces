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
	ll n; cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	ll s = accumulate(all(v), 0ll);
	ll x = s / (n-1) + ((s % (n-1)) != 0);
	x = max(x, *max_element(all(v)));
	cout << x << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

