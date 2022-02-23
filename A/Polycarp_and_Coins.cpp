#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	long long int n;
	cin >> t;
	for(int _ = 0; _ < t; _++){
		cin >> n;
		long long int two = n/3 + (n%3 == 2);
		long long int one = n - two*2;
		cout << one << " " << two << endl;
	}
}
