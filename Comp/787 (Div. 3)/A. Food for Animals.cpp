#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll a, b, c, x, y;
	cin >> a >> b >> c >>x >>y;
	x -= a;
	y -= b;
	if(max(x,0ll) + max(y,0ll) > c){
		cout << "NO" << endl;
	}
	else cout << "YES" << endl;
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

