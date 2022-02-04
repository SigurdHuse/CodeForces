#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	long long int t, x,y,n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> x >> y >> n;
		long long int tmp = n % x;
		if(tmp >= y) n -= tmp - y;
		else{
			n -= tmp;
			n -= x - y;
		}
		cout << n << endl;
	}
}
