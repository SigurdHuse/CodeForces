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
	ll m = 100;
	bool ok = 0;
	ll cnt = 0, ans = 0;
	for(ll i = 1; i <= min(n, m); ++i){
		if(n % i == 0){
			if(ok){
				cnt++;
			}
			else{
				ok = 1; 
				cnt = 1;
			}
		}
		else ok = 0;
		ans = max(ans, cnt);
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

