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
	ll xs, ys, xe, ye; 
	cin >> xs >> ys >> xe >> ye;
	
	if(ye < ys){
		cout << -1 << endl;
		return;
	}
	
	ll ans = ye - ys;
	xs += ans;
	
	if(xe > xs){
		cout << -1 << endl;
		return;
	}
	
	ans += xs - xe;
	
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

