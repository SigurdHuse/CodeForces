#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	ll r, b, d;
	while(tt--){
		cin >> r >> b >> d;
		if(b < r) swap(r,b);
		if((b/r) -1 == d){
			if(b %r)cout << "NO" <<endl;
			else cout << "YES" <<endl; 
		}
		else if((b/r) - 1 > d) cout << "NO" <<endl;
		else cout << "YES" <<endl;
	}
}
