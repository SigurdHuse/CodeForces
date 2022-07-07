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
	double a, x, intpart;
	while(tt--){
		cin >> a;
		x = 360.0/(180 - a);
		//cout << x << endl;
		cout << (modf(x,&intpart) == 0.0 ? "YES": "NO") << endl;
	}
}
