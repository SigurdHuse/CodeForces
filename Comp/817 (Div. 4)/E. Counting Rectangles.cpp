#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// we condition on w and create prefix sum array

void solve(){
	int n,q; cin >> n >> q;
	vector<pair<int,int>> v(n);
	for(auto &[a, b] : v) cin >> a >> b;
	sort(all(v));
	vector<int> w(n), h(n);
	
	REP(i,n){
		w[i] = v[i].f;
		h[i] = v[i].s;
	}
	
	int hs, ws, hb, wb;
	
	while(q--){
		ll ans = 0;
		cin >> hs >> ws >> hb >> wb;
		auto it1 = lower_bound(all(w), ws);
		while(it1 != w.end() && *it1 <= ws) ++it1;
		if(it1 == w.end()){
			cout << 0 << endl;
			continue;
		}
		int idx1 = it1 - w.begin();
		
		//cout << idx1 <<" " << idx2 << endl;
		
		for(int i = idx1; i < n; ++i){
			if(w[i] >= wb) break;
			if(h[i] > hs && h[i] < hb){
				ans += w[i]*h[i];
			}
		}
		cout << ans << endl;
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

