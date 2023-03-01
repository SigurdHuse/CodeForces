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
	ll a, b; cin >> a >> b;
	ll n, m; cin >> n >> m;
	
	ll ans = LLONG_MAX;
	ll tmp = 0;
	
	// Buy all on first day
	tmp += (n - n / (m + 1)) * a;
	ans = min(ans, tmp);
	tmp = 0;
	// Buy max with promotion and rest on second
	tmp += (n/ (m + 1)) * m * a;
	//cout << tmp << endl;
	tmp += (n - (n/ (m + 1))*(m+1)) * b;
	//cout << tmp << endl;
	ans = min(ans, tmp);	
	// Buy all on second day
	ans = min(ans, n * b);
	
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

