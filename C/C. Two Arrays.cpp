#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

ll fac(ll n){
	ll ans = 1;
	for(int i = 1; i <= n; ++i){
		ans = (ans * i) % M;
	}
	return ans;
}

ll C(ll n, ll k){
	return fac(n) / (fac(k) * fac(n-k));
}

void solve(){
	ll n, m; cin >> n >> m;
	cout << C(n + 2*m - 1, 2*m) % M << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

