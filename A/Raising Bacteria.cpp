#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, ans = 0;
	cin >> x;
	while(x){
		x &= x - 1;
		ans ++;
	}
	cout << ans << endl;
}
