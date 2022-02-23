#include <bits/stdc++.h>
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	int n;
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		vector<ll> v(n);
		for(int i = 0; i< n; i++){
			cin >> v[i];
		}
		ll ans = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()); 
		cout << ans << endl;
	}
}
