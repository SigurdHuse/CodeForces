#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t,n,x;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> n >> x;
		n -= 2;
		cout << 1 + (n > 0)*(n/x + (n%x > 0)) << endl;
	}
}
