#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	ll n,k;
	for(int _ = 0; _ < t; _ ++){
		cin >> n >> k;
		if(n == k) cout << n + 1 << endl;
		else if(k < n) cout << k << endl; 
		else{
			ll ans = k + k/(n-1);
			ans = ans%n == 0 ? ans-1 : ans;
			cout << ans << endl;
		}
	}
}
