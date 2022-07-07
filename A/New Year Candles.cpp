#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int ans = 0, extra = 0;
	while(a){
		ans += a;
		extra += a%b;
		a /= b;
		if(extra >= b){
			a++;
			extra -= b;
		}
	}
	cout << ans << endl;
}
