#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >>x;
	ll ans = -1, tmp, s = 0;
	for(int i = 0; i< n;++i){
		cin >> tmp;
		s += tmp;
		if(s >= x){
			ans = i+1;
			break;
		}
	}
	cout << ans << endl;
}
