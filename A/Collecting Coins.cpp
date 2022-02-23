#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	ll a, b, c, n;
	for(int _ = 0; _ < t; _ ++){
		cin >> a >> b >> c >>n;
		ll ans = 0;
		ll tmp = max(a,max(b,c));
		ans += 3*tmp -a -b -c;
		n -= ans;
		if(n >= 0 && n%3 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
