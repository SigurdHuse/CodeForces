#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int x, y, a, b; cin >> x >> y>> a >> b;
	ll l = 0, r = 1e9 +100;
	if(a == b){
		cout << min(x,y)/a << endl;
		return;
	}
	if(a < b) swap(a,b);
	while(r- l > 1){
		ll m = (l + r)/2;
		ll right = floorl((x-m*b)*1.0l/(a-b));
		ll left = ceill((y-m*a)*1.0l/(b-a));
		if(max(left,0ll) <= min(right, m)) l = m;
		else r = m;
	}
	cout << l << endl;
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

