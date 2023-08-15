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

ll powm(ll a, ll b){
	ll ans = 1;
	
	while(b){
		if(b & 1) ans = (ans * a) % M;
		a *= a;
		a %= M;
		b >>= 1; 
	}
	return ans;
}


void solve(){
	ll x;
	unsigned long long n; cin >> x >> n;
	ll tmp = x;
	vector<ll> primes;
	
	for(ll i = 2; i*i <= tmp; ++i){
		if(x % i == 0){
			primes.push_back(i);
			while(x % i == 0) x /= i;
		}
	}
	if(x != 1) primes.push_back(x);
	
	ll ans = 1;
	for(ll prime : primes){
		ll power = 0;
		unsigned long long factor = prime;
		
		while(factor <= n){
			power += n / factor;
			factor *= prime;
		}
		//cout << prime << " " << power << endl;
		prime %= M;
		ans *= powm(prime, power);
		ans %= M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

