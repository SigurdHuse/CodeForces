#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll const M = 1e9 + 7;

ll modpower(ll a, ll b){
	ll ans = 1;
	a = a % M;
	while(b > 0){
		if(b & 1){
			ans = (ans * a) % M;
		}
		b /= 2;
		a = (a * a) % M;
	}
	return ans;
}

void solve(){
	ll a, b, k; cin >> a >> b >> k;
	ll n = 1, m =1;
	
	n *= ((a-1)*k + 1) % M;
	m *= (b - 1)*k;
	m %= M;
	
	for(ll i = 0; i < a; ++i){
		m *= (n - i + M) % M;
		m %= M;
		m *= modpower((a - i + M) % M, M - 2) % M;
		m %= M;
	}
	m = (m + 1) % M;
	cout << n << " " << m << "\n";
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

