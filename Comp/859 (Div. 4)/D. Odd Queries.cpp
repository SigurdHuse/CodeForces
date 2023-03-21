#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int a[N];
ll cum[N];


void solve(){
	int n,q; cin >> n >> q;
	REP(i,n) cin >> a[i];
	memset(cum, 0, sizeof cum);
	
	for(int i = 1; i <= n; ++i){
		cum[i] = a[i-1] + cum[i-1];
	}
	
	ll l, r, k;
	
	while(q--){
		cin >> l >> r >> k;
		int cur = cum[r] - cum[l-1];
		int ex = (r - l + 1)*k;
		
		if((cum[n] - cur + ex) & 1) cout << "YES" << endl;
		else cout << "NO" << endl;
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

