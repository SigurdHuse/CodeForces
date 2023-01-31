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
	ll n, x; 
	cin >> n >> x;
	if(x > n){
		cout << -1 << endl;
		return;
	}
	ll ans = n;
	int i = 0;
	
	while(n > x){
		if(bit(n,i)){
			//cout << i << endl;
			ans += (1ll << i);
			n &= ans;
		}
		else if(bit(ans,i)){
			ans -= (1ll << i);
		}
		i++;
		//cout << n << endl;
	}
	cout << (n == x ? ans : -1) << endl;
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

