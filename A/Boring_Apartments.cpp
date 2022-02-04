#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, x;
	cin >> t;
	for(int i = 0; i< t; i++){
		cin >> x;
		int ans = (x % 10 - 1)*10;
		int tmp = 1;
		while(x){
			ans += tmp;
			x /= 10;
			tmp ++;
		}
		cout << ans << endl;
	}
}
