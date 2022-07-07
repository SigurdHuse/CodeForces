#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	ll x,y, a, b;
	while(tt--){
		cin >> x >> y >> a >> b;
		ll ans = 0;
		if(x > y) swap(x,y);
		if(x*b <= 2*x*a){
			ans += x*b;
			ans += (y - x)*a;
		}
		else{
			ans += x*a + y*a;
		}
		cout << ans << endl;
	}
}
