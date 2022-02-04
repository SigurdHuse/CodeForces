#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	long long int a, b;
	cin >> t;
	for(int i= 0; i< t; i++){
		cin >> a >> b;
		long long int tmp = abs(a -b);
		if(tmp % 10 == 0) cout << tmp/10 << endl;
		else cout << tmp/10 + 1 << endl;
	}
}
