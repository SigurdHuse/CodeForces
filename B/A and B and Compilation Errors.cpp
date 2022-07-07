#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x;
	ll a = 0, b = 0, c = 0;
	cin >> n;
	REP(i,n){
		cin >> x;
		a +=x;
	}
	REP(i,n-1){
		cin >> x;
		b += x;
	}
	REP(i,n-2){
		cin >> x;
		c += x;
	}
	cout << a - b << endl << b -c << endl;
}
