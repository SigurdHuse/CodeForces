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
	int k, a, b, x, y; cin >> k >> a >> b >> x >> y;
	
	int ans = 0, tmp = 0, cur_k = k;
	//cout << a << " " << b << " " << x << " " << y << "\n"; 
	// First b then a
	tmp += max(0,k - b + 1) / y + (max(0,k - b + 1) % y != 0);
	cur_k -= tmp * y;
	
	tmp += max(0, cur_k - a + 1) / x  + (max(0,cur_k - a + 1) % x != 0);
	ans = max(ans, tmp);
	
	// All a then b
	cur_k = k;
	tmp = 0;
	
	tmp += max(0,k - a + 1) / x + (max(0,k - a + 1) % x != 0);
	cur_k -= tmp * x;
	tmp += max(0, cur_k - b + 1) / y  + (max(0,cur_k - b + 1) % y != 0);
	ans = max(ans, tmp);
	
	cout << ans << "\n";
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

