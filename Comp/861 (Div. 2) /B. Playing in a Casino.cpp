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
	int n, m; cin >> n >> m;
	vector<vector<ll>> v(n, vector<ll>(m));
	REP(i,n) REP(j,m) cin >> v[i][j];
	
	ll ans = 0, cum = 0;
	
	for(ll j = 0; j < m; ++j){
		cum = v[0][j];
		for(ll i = 1; i < n; ++i){
			ans += abs(cum - v[i][j] * i); 
			cum += v[i][j];
		}
		cout << ans << endl;
	}
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

