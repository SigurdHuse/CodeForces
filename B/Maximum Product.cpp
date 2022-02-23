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
	while(tt--){
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i< n; i++) cin >> v[i];
		sort(v.begin(),v.end());
		ll ans = 1;
		if(v[n-1] <= 0){
			ans = v[n-1]*v[n-2];
			ans *= v[n-3]*v[n-4];
			ans *= v[n-5];
		}
		else if(v[0]*v[1] > v[n-1]*v[n-2]){
			ans *= v[0]*v[1]
			if(v[2]*v[3] > v[n-1]*v[n-2]){
				ans *= v[2]*v[3];
				if(v[n] != 0) ans *= v[n];
				else ans *= v[4];
			}
			else{
				ans *= v[n-1]*v[n-2];
				ans *= v[n-3];
			}
		}
	}
}
