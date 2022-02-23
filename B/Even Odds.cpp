#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	if(k <= (n/2 + n%2)){
		cout << 2*k - 1 << endl;
	}
	else cout << 2*(n - k) << endl;
}
