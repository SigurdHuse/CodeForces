#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	long long int n;
	cin >> n;
	long long int ans = n/2;
	if(n % 2){
		ans = -ans;
		ans--;
	}
	cout << ans << endl;
}
