#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int _ = 0; _ < t; _++){
		cin >> n;
		long long int tmp = n*(n+1)/2;
		cout << tmp /n<<endl;
	}
}
