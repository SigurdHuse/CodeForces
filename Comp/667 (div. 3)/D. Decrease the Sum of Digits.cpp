#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

int sum(ll cpy){
	int d_sum = 0;
	while(cpy){
		d_sum += cpy%10;
		cpy /= 10;
	}
	return d_sum;
}

void solve(){
	ll n, s, ans = 0; cin >> n >> s;
	if(sum(n) <= s){
		cout << 0<< endl;
		return;
	}
	ll pw = 1;
	for(int i = 0; i< 18; ++i){
		int digit = (n/pw)%10;
		ll add = pw*((10-digit) % 10);
		n += add;
		ans += add;
		if(sum(n) <= s) break;
		pw *= 10;
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

