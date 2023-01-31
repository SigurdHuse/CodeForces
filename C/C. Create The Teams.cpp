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
	ll n, x; cin >> n >> x;
	vector<ll> v(n), dp(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	ll cur = v[0];
	ll mems = (x / cur) + (x % cur != 0) - 1;
	
	if(cur >= x){
		dp[0] = 1;
	}
	else if(mems < n){
		dp[mems] = 1;
	}
	//for(auto k : dp) cout<< k << " ";
	//cout << endl;
	
	for(int i = 1; i < n; ++i){
		//dp[i] = max(dp[i], dp[i-1]);
		cur = v[i];
		mems = (x / cur) + (x % cur != 0) - 1;
		if(i + mems < n){
			dp[i+mems] = max(dp[i+mems], 1 + dp[i-1]);
		}
		//for(auto k : dp) cout<< k << " ";
		//cout << endl;
		dp[i] = max(dp[i], dp[i-1]);
	}
	cout << dp[n-1] << endl;
	
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

