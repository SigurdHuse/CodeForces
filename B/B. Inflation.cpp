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
	int n; cin >> n;
	double k; cin >> k;
	vector<double> v(n);
	for(auto &a : v) cin >> a;
	ll ans = 0;
	for(int i = 1; i < n; ++i){
		ll inc = max(0.,ceil((100*v[i] - v[i-1]*k)/k));
		//cout << (100*v[i] - v[i-1]*k)/k << " ";
		v[i-1] += inc;
		ans += inc;
		v[i] += v[i-1];
	}
	//cout << endl;
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

