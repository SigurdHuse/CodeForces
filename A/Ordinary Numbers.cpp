#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	ll n;
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		ll fac = 1;
		ll ex = 1;
		ll num = 1;
		ll ans = -1;
		while(num <= n){
			ans ++;
			num = fac*ex;
			ex ++;
			if(ex == 10){
				fac *= 10;
				fac++;
				ex = 1;
			}
		}
		cout << ans << endl;
	}
}
