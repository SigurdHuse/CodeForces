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
	int a, b;
	while(tt--){
		int x, y, z;
		cin >> a >> b;
		z = a*b;
		x = a*(b/2);
		y = a*(b/2 + b%2);
		if(x == y){
			x-= a;
			y -= a;
		}
		cout << "YES" << endl;
		cout << x << " " << y << " " << z << endl;
	}
}
