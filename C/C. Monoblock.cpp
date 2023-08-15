#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
#define int long long 
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n+2,0);
	for(int i = 1; i <= n; ++i) cin >> a[i];
	
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		ans += (a[i] != a[i+1]) * (n - (i + 1) + 1)*i;
	}
	while(m--){
		int i, x; cin >> i >> x;
		
		ans -= (a[i] != a[i-1]) * (n - i + 1)*(i-1);
		ans -= (a[i] != a[i+1]) * (n - (i+1) + 1)*i;
		a[i] = x;
		ans += (a[i] != a[i-1]) * (n - i + 1)*(i-1);
		ans += (a[i] != a[i+1]) * (n - (i + 1) + 1)*i;
		
		cout << ans + n * (n+1)/2 << endl;
	}
}

int32_t main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
	return 0;
}

