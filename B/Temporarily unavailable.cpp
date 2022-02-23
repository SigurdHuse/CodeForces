#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int a, b, c, r;
	while(tt--){
		cin >> a >> b >> c >> r;
		if(a > b) swap(a,b);
		ll ans = b - a;
		//cout << ans <<endl;
		if(c <= b){
			if(c >= a){
				ans -= min(b - c, r);
				ans -= min(c - a, r);
			}
			else{
				ans -= max(0, c - a + r);
			 }
		}
		else{
			ans -= max(0, b - c +r);
		}
		ans = max(0ll,ans);
		cout << ans << endl;
	}
}
