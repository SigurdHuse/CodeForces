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
	ll m, k, a1, ak;
	cin >> m >> k >> a1 >> ak;
	ll ans = 0;
	
	// First go as low as possible with 1 coin
	ll ones_needed = m - (m/k)*k;
	if(ones_needed <= a1){
		a1 -= ones_needed;
		m -= ones_needed;
		
		m -= (a1/k)*k;
		ans += max(0ll, m/k - ak);
	}
	else{
		ans += ones_needed - a1;
		a1 = 0;
		m -= ones_needed;
		ans += max(0ll, m/k - ak);
	}
	cout << ans << "\n";
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

