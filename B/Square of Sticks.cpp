#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> v(n);
	for(auto &b : v) cin >> b;
	sort(v.begin(),v.end());
	if(n < 4) cout << 0;
	else cout << v[n-4] * v[n-4] << endl;
}
