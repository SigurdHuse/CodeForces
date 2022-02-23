#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n; 
	ll ans,extra, odd_extra;
	while(tt--){
		ans = 0, extra = 0, odd_extra = 0;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n;++i)cin >>v[i];
		for(int i = 1;i < n-1;++i){
			if(v[i]%2){
				extra--;
				v[i]++;
				odd_extra += v[i];
			}
			else extra += v[i];
			ans += v[i]/2;
			if(extra > 0){
				extra += odd_extra;
				odd_extra = 0;
			}
		}
		if(extra < 0) ans = -1; 
		cout << ans <<endl;
	}
}
