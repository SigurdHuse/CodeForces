#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = 0;
	cin >> n;
	vector<int> v(n);
	int dp[101] = {};
	for(auto &x : v) cin >> x;
	for(int i = 0; i <n; ++i){
		for(int j = i +1; j < n; j++){
			dp[v[i] + v[j]]++;
		}
	}
	for(int i = 0; i <n; ++i){
		ans = max(ans, dp[i]);
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

