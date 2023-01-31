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
	ll n = SZ(s);
	ll cnt = 0;
	vector<ll> far;
	
	for(ll i = 0; i < n; ++i){
		if(s[i] == '+') cnt++;
		if(s[i] == '-') cnt--;
		
		if(cnt == -1){
			cnt = 0;
			far.push_back(i+1);
		}
	}
	far.push_back(n);
	ll ans = 0;
	
	for(ll i : far){
		ans += i;
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

