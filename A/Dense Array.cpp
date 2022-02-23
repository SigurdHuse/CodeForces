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
		int ans = 0;
		for(int i = 0; i< n; ++i) cin >> v[i];
		for(int i = 0; i< n-1; ++i){
			int tmp = min(v[i],v[i+1]);
			while(tmp*2 < max(v[i], v[i+1])){
				ans ++,
				tmp *= 2;
			}
		}
		cout << ans << endl;
	}
}
