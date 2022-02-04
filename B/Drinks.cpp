#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n, tmp, s = 0; 
	cin >> n;
	for(int i = 0; i< n; i++){
		cin >> tmp;
		s += tmp;
	}
	cout << setprecision(16)<<(double)s/n << endl;
}
