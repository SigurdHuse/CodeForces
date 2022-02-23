#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ans = 0, tmp, n;
	cin >> n;
	for(int i = 0; i< n; ++i){
		cin >> tmp;
		ans ^= tmp;
	}
	cout << ans << endl;
}
