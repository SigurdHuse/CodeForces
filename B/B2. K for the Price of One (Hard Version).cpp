#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int a[N];

void solve(){
	int n, p, k; cin >> n >> p >> k;
	for(int i = 1;i <= n; ++i) cin >> a[i];
	sort(a+1,a+n+1);
	
	
	vector<pair<int,int>> dp(n+1);
	for(int i = 1;i < k; ++i){
		if(dp[i-1].f + a[i] <= p){
			dp[i].f =dp[i-1].f + a[i];
			dp[i].s = dp[i-1].s +1; 
		}
		else{
			dp[i] = dp[i-1];
		}
	}
	
	for(int i = k; i <= n; ++i){
		if(dp[i-k].f + a[i] <= p){
			dp[i].f = dp[i-k].f + a[i];
			dp[i].s = dp[i-k].s + k;
		}
		else{
			dp[i] = dp[i-1];
		}
	}
	
	int ans = 0;
	//for(auto j : dp){
		//cout << j.f << " " << j.s << endl;
	//}
	for(int i = 1; i <= n; ++i){
		ans = max(ans, dp[i].s);
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

