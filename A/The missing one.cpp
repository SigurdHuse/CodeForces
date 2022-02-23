#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, s = 0, tmp;
	cin >> n;
	for(int i = 0; i< n-1;++i){
		cin >> tmp;
		s += tmp;
	}
	cout << n*(n+1)/2 - s <<endl;
}
