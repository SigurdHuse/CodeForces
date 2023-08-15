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
	string s; cin >> s;
	ll n= SZ(s);
	
	ll ans = 0, mx = 0, cnt = 0;
	
	for(ll i = 0; i < 2*n; ++i){
		if(s[i % n] == '0'){
			mx = max(mx,cnt);
			cnt = 0;
		}
		else cnt++;
	}
	if(cnt == 2*n){
		cout << n*n << endl;
		return;
	}
	
	mx = max(mx,cnt);
	ans = mx;
	
	for(int i = 1; i <= mx; ++i){
		ans = max(ans, (mx - i + 1) * i);
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

