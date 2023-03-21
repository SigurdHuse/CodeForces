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
	ll n, k; cin >> n >> k;
	map<ll,ll> cnt, parent;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	
	ll ans = 0;
	
	if(k == 1){
		for(int i = 0; i < n; ++i){	
			if(cnt.count(v[i])){
				ans += max(0ll, cnt[v[i]]*(cnt[v[i]]-1)/2);
			}
			cnt[v[i]]++;
		}
	}
			
	else{
		ll dob = k*k;
		for(int i = 0; i < n; ++i){
			if(v[i] % dob == 0){
				if(parent.count(v[i] / k)){
					ans += parent[v[i] / k];
				}
				if(cnt.count(v[i] / k)){
					parent[v[i]] += cnt[v[i] / k];
				}
			}
			else if(v[i] % k == 0){
				if(cnt.count(v[i] / k)){
					parent[v[i]] += cnt[v[i] / k];
				}
			}
			
			cnt[v[i]]++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

