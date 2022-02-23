#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	ll l, r;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> l >> r;
		cout << __gcd(l,r) << endl;
	}
}
