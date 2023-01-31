#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Keep two queues one with min and one with max

void solve(){
	int n, m; cin >> n >> m;
	vector<int> v(n);
	vector<ll> cum(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	ll ans = 0;
	for(int i = 0; i < m; ++i){
		ans += v[i];
		cum[i] = v[i];
		cout << ans << " ";
	}
	for(int i= m; i < n; ++i){
		cum[i] = v[i] + cum[i-m];
	}
	
	for(int i = m; i < n; ++i){
		ans += v[i];
		ans += cum[i-m];
		cout << ans << " ";
	}
	
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

