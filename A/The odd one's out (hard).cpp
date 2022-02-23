#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, ans = 0, tmp;
	cin>> n;
	for(int i = 0; i< n; ++i){
		cin >> tmp;
		ans ^= tmp;
	}
	cout << ans << endl;
}
