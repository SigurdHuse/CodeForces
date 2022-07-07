#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tmp, c1 = 0, c2= 0, c3 = 0, c4 = 0, n;
	cin >> n;
	REP(i,n){
		cin >> tmp;
		if(tmp == 1) c1++;
		else if(tmp == 2) c2 ++;
		else if(tmp == 3) c3 ++;
		else c4++;
	}
	int ans = c4;
	ans += c3;
	c1 -= c3;
	ans += c2/2;
	if(c2%2){
		ans++;
		c1 -= 2;
	}
	if(c1 > 0) ans += c1/4 + (c1%4 != 0);
	cout << ans << endl;
}
