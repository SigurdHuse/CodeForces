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

void solve(){
	ll n; cin >> n;
	ll ans = 1;
	ll sub = 1;
	
	for(ll i = 2; i <= n; ++i){
		ans = (ans * i) % M;
		sub = (sub * 2) % M;
	}
	ans -= sub;
	ans = (ans + M) % M;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

