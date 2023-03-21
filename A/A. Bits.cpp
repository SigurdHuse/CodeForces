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
	ll l, r; cin >> l >> r;
	if((r == 0) || (r == l)){
		cout << r << endl;
		return;
	}
	
	if(__builtin_popcountll(r + 1ll) == 1){
		cout << r << endl;
		return;
	}
	ll ans = l;
	int i = 0;
	
	while((i < 64) && (ans <= r)){
		ans |= (1ll << i);
		i++;
	}
	i--;
	ans ^= (1ll << i);
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

