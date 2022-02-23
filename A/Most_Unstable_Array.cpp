#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	long long int n,m;
	cin >> t;
	for(int _=0; _ < t; _++){
		cin >> n >> m;
		if(n == 1) cout << 0 << endl;
		else if(n == 2) cout << m <<endl;
		else cout << 2*m << endl;
	}
}
