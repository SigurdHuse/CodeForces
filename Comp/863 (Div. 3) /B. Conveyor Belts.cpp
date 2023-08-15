#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find number of squares difference

ll n;

ll f_s(ll x, ll y){
	//ll pos = x;
	
	if((y <= n/2) && (x <= n/2)){
		if(x >= y){
			return y;
		}
		else{
			return x;
		}
	}
	else if((y > n/2) && (x <= n/2)){
		y = n - y + 1;
		if(y <= x){
			return y;
		}
		else return x;
	}
	else if((y <= n/2) && (x > n/2)){
		x = n - x + 1;
		if(x >= y){
			return y;
		}
		else return x;
	}
	else{
		y = n - y + 1;
		x = n - x + 1;
		
		if(y <= x){
			return y;
		}
		else return x;
	}
}

void solve(){
	ll x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	//cout << f_s(x1,y1) << " " << f_s(x2,y2) << endl;
	cout << abs(f_s(x1,y1) - f_s(x2,y2)) << endl;
	
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

