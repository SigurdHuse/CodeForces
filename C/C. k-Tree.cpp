#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

void add(ll &a, ll b){
	a += b;
	a %= M;
}

ll dp[100][2];

void solve(){
	ll n, k,d; cin >> n >> k >> d;
	dp[0][0] = 1;
	dp[0][1] = 0;
	
	for(ll i = 1;i <= n; ++i){
		dp[i][0] = dp[i][1] = 0;
		for(ll j = 1; j <= k; ++j){
			if(i - j < 0) break;
			if(j < d){
				add(dp[i][0], dp[i-j][0]);
				add(dp[i][1], dp[i-j][1]);
			}
			else{
				add(dp[i][1], dp[i-j][0]);
				add(dp[i][1], dp[i-j][1]);
			}
		}
	}
	cout << dp[n][1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

