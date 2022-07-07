#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m, a, b;
	cin >> n >> m >> a >>b;
	int ans = 0;
	// b rubles for m rides
	// a for 1
	// need to travel n stops
	while(n > 0 ){
		if(n < m){
			ans += min(a*n, b);
			n -= n;
		}
		else{
			ans += min(a*m, b);
			n -= m;
		}
	}
	cout << ans << endl;
}
