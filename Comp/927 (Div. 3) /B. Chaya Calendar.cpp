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
	for(auto &x: v) cin >> x;
	
	
	ll ans = v[0];
		
	if(n == 1){
		cout << ans << "\n";
		return;
	}	
	ans++;
	
	
	for(int i = 1; i < n; ++i){
		if(ans % v[i] == 0){
			ans++;
		}
		else{
			ans += v[i] - (ans % v[i]);
			ans++;
		}
	}
	ans--;
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

