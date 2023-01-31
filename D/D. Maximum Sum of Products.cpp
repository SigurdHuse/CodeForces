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
	vector<ll> a(n), b(n);
	vector<ll> cum(n+1);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	cum[1] = a[0]*b[0];
	for(int i = 1; i < n; ++i){
		cum[i+1] = cum[i] + a[i]*b[i];
	}
	ll ans = cum[n];
	
	for(int i = 0; i < n; ++i){
		for(int j = 1+i; j < n; ++j){
			ll tmp = 0;
			for(int k = i; k <= j; ++k){
				tmp += a[j-k+i]*b[k];
			}
			//cout << i << " " << j << " " << tmp << endl; 
			ans = max(ans, cum[i] + tmp + cum[n] - cum[j+1]);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

