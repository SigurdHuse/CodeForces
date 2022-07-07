#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,n,k;
	cin >> tt;
	while(tt--){
		cin >> n >> k;
		int ans = 0;
		vector<int> v(n);
		for(auto &b : v) cin >> b;
		sort(v.begin(),v.end());
		int begin = 0, last = n -1;
		while(v[last] >= k){
			ans++;
			last--;
		}
		while(begin < last){
			if(v[begin] + v[last] >= k){
				ans++;
				last--;
			}
			begin++;
		}
		cout << ans << endl;
	}
}
