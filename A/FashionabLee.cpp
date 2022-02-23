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
		if(n%4) cout << "NO" <<endl;
		else cout << "YES" <<endl;
	}
}
