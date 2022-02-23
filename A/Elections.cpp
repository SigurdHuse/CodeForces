#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int a,b,c;
	while(tt--){
		cin >> a >> b >> c;
		int mx = max({a,b,c});
		if(a == b && b == c) cout << 1 << " " <<  1 << " " << 1 << endl;
		else if(a == b && a == mx) cout << 1 << " " << 1 << " "<< (mx - c + 1) << endl;
		else if(a == c && a == mx) cout << 1 << " " << (mx - b + 1) << " "<< 1 << endl;
		else if(b == c && b == mx) cout << (mx - a + 1) << " " << 1 << " "<<1 << endl;
		else{
			cout << (mx - a + 1)*(a != mx) << " ";
			cout << (mx - b + 1)*(b != mx) << " ";
			cout << (mx - c + 1)*(c != mx) << endl;
		}
	}
}
