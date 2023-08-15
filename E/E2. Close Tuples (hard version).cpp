#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 5, M = 1e9 + 7;

ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p){
	ll res = 1;
	while(p){
		if(p % 2 == 0){
			a = (a * a) % M;
			p /= 2;
		}
		else{
			res = (res * a) % M;
			p--;
		}
	}
	return res;
}

ll C(int n, int k){
	if(k > n) return 0;
	
	return fact[n] * invFact[k] % M *invFact[n - k] %M;
}


void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<ll> v(n);
	
	for(ll &e : v) cin >> e;
	
	sort(all(v));
	
	ll ans = 0;
	
	for(int i = 0; i < n; ++i){
		int l = i+1;
		int r = upper_bound(all(v), v[i] + k) - v.begin();
		
		ans = (ans + C(r - l, m -1)) % M;
	}
	
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	fact[0] = invFact[0] = 1;
	for(int i = 1; i < N; ++i){
		fact[i] = (fact[i-1] * i) % M;
		invFact[i] = fast_pow(fact[i], M - 2);
	}
	
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

