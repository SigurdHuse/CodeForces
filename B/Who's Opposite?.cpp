#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	ll a, b, c;
	for(int _ = 0; _ < t; _ ++){
		cin >> a >> b >> c;
		if(a > b) swap(a,b);
		ll size = (b - a)*2;
		if(size == 0 || (b-a) < a || c > size)cout<< -1 <<endl;
		else if(c > size/2) cout << c - size/2 << endl;
		else cout << c + size/2 << endl;
	}
}
