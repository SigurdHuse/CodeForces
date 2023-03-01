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
	ll c, h;
	long double t; cin >> c >> h;
	cin >> t;
	long double mx = t, cur = 0;
	ll ans = 0, cnt = 0;
	
	for(int i = 0; i < 1e2; ++i){
		cur += h;
		cnt++;
		if(abs(cur/(long double)cnt - t) < mx){
			mx = abs(cur/(long double)cnt - t);
			ans = cnt;
		}
		cur += c;
		cnt++;
		if(abs(cur/(long double)cnt - t) < mx){
			mx = abs(cur/(long double)cnt - t);
			ans = cnt;
		}	
	}
	cout << mx << endl;
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

