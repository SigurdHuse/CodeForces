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
	int n, l, r; cin >> n >> l >> r;
	vector<int> v(n);
	for(auto &a : v)cin >> a;
	multiset<int> mem(all(v));
	
	ll ans = 0;
	
	for(int i = 0; i< n; ++i){
		auto it1 = mem.lower_bound(l - v[i]);
		auto it2 = mem.upper_bound(r - v[i]);
		int dist = distance(it1, it2);
		//cout << dist << endl;
		ans += dist;
		if(l -v[i] <= v[i] && r - v[i] >= v[i]) ans--;
		auto it  = mem.find(v[i]);
		mem.erase(it);
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

