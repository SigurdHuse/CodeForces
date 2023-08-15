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
	ll n, m; cin >> n >> m;
	ll ans = (n + 1)*n/2;
	
	ll z = n - m;
	ll k = z / (m+1);
	
	ans -= (m + 1)*k * (k+1) / 2ll;
	ans -= (z % (m + 1)) * (k+1);
	
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

