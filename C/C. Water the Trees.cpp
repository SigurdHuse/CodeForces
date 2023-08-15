#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 5;

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	
	ll ans = 1e18;
	int mx = *max_element(a, a+n);
	
	for(int need : {mx, mx + 1}){
		ll l = 0, r = 1e18;
		ll res = -1;
		while(l <= r){
			ll mid = (l + r) >> 1;
			ll cnt1 = (mid + 1)/2, cnt2 = mid - cnt1;
			ll need1 = 0;
			
			REP(i,n){
				int ch = a[i];
				ll cur = (need - ch)/2;
				if((need - ch) % 2 == 1) ++need1;
				
				if(cnt2 >= cur) cnt2 -= cur;
				else{
					cur -= cnt2;
					cnt2 = 0;
					need1 += cur*2;
				}
			}
			
			if(need1 <= cnt1){
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}
		ans = min(ans, res);
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

