#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll N = 50000;

void solve(){
	ll a, b; cin >> a >> b;
	
	ll ans = LLONG_MAX;
	for(ll opt = 1; opt <= min(N, max(a,b)); ++opt){
		ll tmp = a / opt;
		tmp += ((a % opt) > 0);
		
		tmp += b / opt + opt - 1;
		tmp += ((b % opt) > 0);
		
		ans = min(ans, tmp);
	}
	
	cout << ans << endl;
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

