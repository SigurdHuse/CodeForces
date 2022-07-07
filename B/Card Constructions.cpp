#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

vector<ll> dp(1e5);

void fill_dp(){
	dp[0] = 2;
	ll rec = 1;
	for(int i = 1; i < 1e5; ++i){
		dp[i] = 2*(i+1) + 3*rec;
		rec += i + 1;
	}
	//for(ll i : dp) cout << i <<endl;
}

void solve(){
	int n, ans = 0, last = 1e5 - 1;
	cin >> n;
	while(n >1){
		for(int i = last; i > -1; i--){
			if(dp[i] <= n){
				n -= dp[i];
				last = i;
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		fill_dp();
		solve();
	}
}

