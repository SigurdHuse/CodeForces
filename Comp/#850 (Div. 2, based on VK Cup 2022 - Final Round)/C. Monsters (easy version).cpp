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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	ll ans = v[0] - 1;
	v[0] = 1;
	
	for(int i = 0; i < n-1; ++i){
		if(v[i] == v[i+1]) continue;
		if((v[i] + 1) == v[i+1]) continue;
		
		ans += v[i+1] - v[i] - 1;
		v[i+1] = v[i] + 1;
		
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

