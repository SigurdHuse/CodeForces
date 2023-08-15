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
	// Find total area of rectangle
	int n; cin >> n;
	ll h_i, w_i;
	ll total = 0;
	ll max_w = 0, max_h = 0;
	for(int i = 0; i < n; ++i){
		cin >> h_i >> w_i;
		max_h = max(max_h, h_i);
		max_w = max(max_w, w_i);
		
		total += h_i * w_i;
	}
	set<pair<ll,ll>> ans;
	
	for(ll h = max_h; h*h <= total; ++h){
		if(total % h == 0){
			if(total / h >= max_w){
				ans.insert({h, total/h});
			}
		}
	}
	
	for(ll w = max_w; w*w <= total; ++w){
		if(total % w == 0){
			if(total / w >= max_h){
				ans.insert({total/w, w});
			}
		}
	}
	cout << SZ(ans) << "\n";
	for(auto p: ans){
		cout << p.f << " " << p.s << "\n";
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

