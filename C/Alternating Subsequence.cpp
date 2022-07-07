#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n; 
	cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	ll ans = -1, cnt = 1, k = 2, s = v[0];
	bool side = (v[0] >= 0);
	for(int i = 1; i< n; ++i){
		if((v[i] >= 0) != side){
			side = (v[i] >= 0);
			s += v[i];
			cnt++;
			if(cnt == k){
				ans = max(ans, s);
			}
			else if(cnt > k){
				k = cnt;
				ans = s;
			}
		}
		else{
			cnt = 1;
			s = v[i];
		}
	}
	if(ans == -1) ans = *max_element(v.begin(),v.end());
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

