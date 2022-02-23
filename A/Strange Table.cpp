#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	ll n, m, x;
	for(int _ = 0; _ < t; _ ++){
		cin >> n >> m >>x;
		ll col = (x -1) / n + 1;
		ll row = n - (col*n - x);
		
		cout << row*m - (m - col) << endl;
	}
}
