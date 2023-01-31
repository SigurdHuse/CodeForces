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
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	set<ll> facs;
	
	ll ans = 1;
	for(int i = 0; i < n; ++i){
		ans = lcm(ans, v[i]);
		//for(ll j = 2; j*j <= v[i]; ++j){
			//if(v[i] % j == 0){
				//facs.insert(j);
				
			//}
		//}
	}
	ll ans1 = 1;
	for(int i = 0; i < n; ++i){
		ans1 *= __gcd(ans, v[i]);
	}
	
	//ll ans = 1;
	//for(ll e : facs){
		//cout << e << " ";
		//ans *= e;
	//}
	//cout << endl;
	cout << ans1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

