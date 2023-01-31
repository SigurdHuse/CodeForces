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
	vector<ll> fac;
	
	for(ll i = 2; i*i <= n; ++i){
		if(n % i == 0){
			fac.push_back(i);
			n /= i;
			if(SZ(fac) == 3) break;
		}
		if(SZ(fac) == 3 || n == 1) break;
	}
	
	if(SZ(fac) == 0 || SZ(fac) == 1){
		cout << "NO" << endl;
		return;
	}
	if(SZ(fac) == 2){
		if(n > 1 && n != fac[1]){
			cout << "YES" << endl;
			cout << fac[0] << " " << fac[1] << " " << n << endl;
		}
		else cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	cout << fac[0] << " " << fac[1] << " " << fac[2] * n << endl;
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

