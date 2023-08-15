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
	vector<int> a(n), b(n), ca(n+1), cb(n+1);
	
	REP(i,n){
		cin >> a[i] >> b[i];
		ca[a[i]]++; cb[b[i]]++;
	}
	
	ll ans = n*1ll * (n-1)*(n-2) / 6;
	
	for(int i = 0; i < n; ++i){
		ans -= (ca[a[i]] - 1)*1ll * (cb[b[i]] - 1);
	}
	cout << ans << "\n";
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

