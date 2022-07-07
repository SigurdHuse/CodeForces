#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		ll ans = 0,n;
		int layer = 1;
		cin >> n;
		for(ll i = 3; i <= n; i+=2){
			ans += (i*i - (i-2)*(i-2))*layer;
			
			layer++;
		}	
		cout << ans << endl;
	}
}
