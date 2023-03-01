#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int a[100005];

void solve(){
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	vector<ll> dp(n, 0);
	map<ll,ll> val;
	ll ans = 0;
	for(ll i = 0; i < n; ++i){
		if(i >0) dp[i] = dp[i-1];
		if(val.count(a[i])){
			dp[i] += val[a[i]];
		}
		val[a[i]] += (i+1);
		ans += dp[i];
	}
	cout << ans<< endl;
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

