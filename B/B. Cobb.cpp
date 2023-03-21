#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int a[N];

void solve(){
	int n; cin >> n;
	ll k; cin >> k;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	
	ll ans = LLONG_MIN;
	for(ll i = n-1; i >= 1; --i){
		ans = max(ans, i * n - k * (a[n]|a[i]));
	}
	
	for(ll i = n-1; i > 1; --i){
		if(i * (i - 1) - k * a[i] < ans) continue;
		
		for(ll j = i - 1; j >= 1; --j){
			ans = max(ans, i * j - k * (a[i] | a[j]));
		}
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

