#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Buy smalles b_i of smallest a_i

void solve(){
	int n; cin >> n;
	ll ans = 0, cur = 0;
	vector<ll> v(n);
	vector<vector<ll>> b(n, vector<ll>(2));
	
	
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		cin >> b[i][0];
		b[i][1] = i;
	}
	sort(all(b));
	//for(auto p : b) cout << p[0] << " " << p[1] << endl;
	int r = n-1, l = 0;
	
	while(l <= r){
		while((l <= r) && (cur >= b[l][0])){
			ans += v[b[l][1]];
			cur += v[b[l][1]];
			v[b[l][1]] = 0;
			l++;
		}
		ll extra = b[l][0] - cur;
		
		while((l <= r) && (extra > 0)){
			if(v[b[r][1]] <= extra){
				ans += 2*v[b[r][1]];
				cur += v[b[r][1]];
				v[b[r][1]] = 0;
				extra = b[l][0] - cur;
				r--;
			}
			else{
				ans += 2*extra;
				cur += extra;
				v[b[r][1]] -= extra;
				extra = 0;
			}
		}
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

