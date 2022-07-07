#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	int ans = n;
	for(int j = 1; j*j <= n; ++j){
		if(n%j == 0){
			if(j <= k) ans = min(ans, n/j);
			if(n/j <= k) ans = min(ans, j);
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
		solve();
	}
}

