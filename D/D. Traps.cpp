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
	int n, k; cin >> n >> k;
	ll ans = 0;
	vector<int> a(n);
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		ans += a[i];
		a[i] += i + 1;
	}
	
	sort(all(a));
	reverse(all(a));
	
	for(int i = 0; i < k; ++i) ans -= a[i];
	for(int i = 0; i < k; ++i){
		ans += n;
		ans -= i;
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

