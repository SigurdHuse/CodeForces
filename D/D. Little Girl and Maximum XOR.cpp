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
	ll l, r, ans = 0; cin >> l >> r;
	
	//if(l == r){
		//cout << 0 << endl;
		//return;
	//}
	
	
	int i = 63;
	
	for(; i >= 0; --i){
		if(bit(r,i) && !bit(l,i)){
			ans = (1ll << (i + 1)) - 1;
			break;
		}
	}
	
	//for(; i >= 0; --i){
		
		//if((1ll << i) >= l){
			//ans |= (1ll << i);
		//}
		
	//}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

