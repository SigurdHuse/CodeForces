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
	set<pair<ll,ll>> m;
	vector<pair<ll,ll>> v;
	ll x_max = -1, x_min = 1e10, y_max = -1, y_min = 1e10;
	
	if(n == 1){
		cout << "1\n"; return;
	}
	
	for(int i = 0; i < n; ++i){
		ll a, b; cin >> a >> b;
		x_max = max(x_max, a);
		x_min = min(x_min, a);
		y_max = max(y_max, b);
		y_min = min(y_min, a);
		
		m.insert({a,b});
		v[i] = {a,b};
	}
	ll ans = (x_max - x_min + 1) * (y_max - y_min + 1);
	sort(all(v));
	bool flag = 1;
	if(v[0].f < v[1].f){
		for(ll x = v[1].f; x <= x_max; ++x){
			for(ll y = y_min; y <= y_max; ++y){
				if(m.count({x,y}) == 0){
					ans = min(ans, (x_max - v[1].f + 1) * (y_max - y_min + 1));
					flag = 0;
				}
			}
		}
	}
	if(flag){
		ans = min(ans, (x_max - v[1].f + 2) * (y_max - y_min + 1));
		ans = min(ans, (x_max - v[1].f + 1) * (y_max - y_min + 2));
	}
	flag = 1;
	if(v[n-1].f > v[n-1].f){
		for(ll x = x_min; x <= v[n-1].f; ++x){
			for(ll y = y_min; y <= y_max; ++y){
				if(m.count({x,y}) == 0){
					ans = min(ans, (v[n-1].f - x_min + 1) * (y_max - y_min + 1));
					flag = 0;
				}
			}
		}
	}
	if(flag){
		ans = min(ans, (x_max - v[1].f + 2) * (y_max - y_min + 1));
		ans = min(ans, (x_max - v[1].f + 1) * (y_max - y_min + 2));
	}
	
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

