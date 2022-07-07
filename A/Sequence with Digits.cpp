#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

pair<ll,ll> min_max(ll x){
	pair<ll,ll> ans = {INT_MAX, INT_MIN};
	while(x){
		ll tmp = x % 10;
		ans.first = min(ans.first, tmp);
		ans.second = max(ans.second,tmp);
		x /= 10;
	}
	return ans;
}

void solve(){
	ll a, k;
	cin >> a >> k;
	k--;
	while(k--){
		pair<ll,ll> tmp = min_max(a);
		if(tmp.first == 0ll) break;
		a += tmp.first*tmp.second;
	}
	cout << a << endl;
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

