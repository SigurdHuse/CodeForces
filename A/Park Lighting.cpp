#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	int n, m;
	for(int _ = 0; _ < t; _ ++){
		cin >> n >> m;
		ll tmp = n*m;
		cout << tmp/2 + (tmp % 2) << endl;
	}
}
