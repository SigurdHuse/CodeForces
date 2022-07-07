#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll tt, a2, b2, x, y, n1, ans1, ans2, a1, b1, n2,tmp;
	cin >> tt;
	while(tt--){
		cin >> a1 >> b1 >> x >>y >> n1;
		a2 = a1; 
		b2 = b1; 
		n2 = n1;
		tmp = a1;
		a1 = max(a1 - n1, x);
		n1 -= tmp - a1;
		b1 = max(b1 - n1, y);
		ans1 = b1*a1;
		
		tmp = b2;
		b2 = max(b2 - n2, y);
		n2 -= tmp - b2;
		a2 = max(a2 - n2, x);
		ans2 = b2*a2;
		cout << min(ans1,ans2) << endl;
	}
}
