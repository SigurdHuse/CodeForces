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
	vector<ll> a(n), b(n), ans(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	queue<ll> q;
	
	for(int i = 0; i < n; ++i){
		q.push(a[i]);
		int l = SZ(q);
		for(int j = 0; j < l; ++j){
			ll cur = q.front(); q.pop();
			ans[i] += min(b[i], cur);
			//cout << b[i] << " cur: " << cur << endl;
			cur -= b[i];
			if(cur > 0ll) q.push(cur);
		}
	}
	for(ll k : ans) cout << k << " ";
	cout << endl;
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

