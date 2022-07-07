#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k, tmp; cin >> n >> k;
	ll ans = 0;
	int mx = 0;
	map<int,int> mem;
	REP(i,n){
		cin >> tmp;
		if(tmp % k == 0) continue;
		++mem[k - tmp%k];
		mx = max(mx, mem[k - tmp%k]);
	}
	for(auto [key,value] : mem){
		if(value == mx){
			ans = k*1ll*(value-1) + key + 1;
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

