#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 


void solve(){
	ll d, k;
	cin >> d >> k;
	
	ll x = 0, y = 0;
	
	while(true){
		if(x <= y && (x + k) * (x +k) + y*y <= d *d) x += k;
		else if(x > y && (y + k) * (y + k) + x * x <= d*d) y += k;
		else break;
	}
	
	cout << (y == x ? "Utkarsh" : "Ashish") << endl;
	
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

