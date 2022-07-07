#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int xa,xb,xf,ya,yb,yf;
	cin >> xa >> ya >> xb >> yb >> xf>> yf;
	int ans = 0;
	if(xa == xb){
		if(xf == xa){
			if(min(ya,yb) < yf && max(ya,yb) > yf){
				ans += 2;
			}
		}
	}
	if(ya == yb){
		if(yf == ya){
			if(min(xa,xb) < xf && max(xa,xb) > xf){
				ans += 2;
			}
		}
	}
	ans += max(xa,xb) - min(xa,xb);
	ans += max(ya,yb) - min(ya,yb);
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

