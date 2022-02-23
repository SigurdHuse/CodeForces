#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		long long int ans = 1 << n;
		//cout << ans << endl;
		for(int i = n-1; i > n/2-1;i--){
			ans -= 1 << i;
		}
		for(int i = 1; i <=n/2-1;i++){
			ans += 1 << i;
		}
		cout << ans << endl;
	}
}
