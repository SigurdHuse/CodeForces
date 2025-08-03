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
	ll l, r; cin >> l >> r;
	int ans = 0;
	if(l > r) swap(l,r);
	
	while(l > 0){
		if(l % 10 == 9 && r % 10 != 0 && l + 1 < r){
			ans += 0;
		}
		else if(r - l <= 1){
			int mx = max(l % 10, r % 10);
			int mi = min(l % 10, r % 10);
			if(mx == mi) ans += 2;
			else if(mx - mi == 1 || mx - mi == 9) ans++;
		}
		l /= 10;
		r /= 10;
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

