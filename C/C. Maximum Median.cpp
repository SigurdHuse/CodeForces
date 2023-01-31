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
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	
	sort(all(v));
	
	ll cur = v[n/2], cnt = 1;
	
	for(int i = n/2 + 1; i < n; ++i){
		if((v[i] - cur)*cnt <= k){
			k -= (v[i] - cur)*cnt;
			cnt++;
			cur = v[i];
		}
		else{
			cur += k / cnt;
			k = 0;
		}
	}
	cur += k /(n/2 + 1);
	cout << cur << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

