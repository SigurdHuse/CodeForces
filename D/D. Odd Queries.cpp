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

int a[N], cum[N];


void solve(){
	int n,q; cin >> n >> q;
	REP(i,n) scanf("%d", &a[i]);
	memset(cum, 0, sizeof cum);
	
	for(int i = 1; i <= n; ++i){
		cum[i] += cum[i-1];
		if(a[i-1] & 1) cum[i]++;
	}
	
	int l, r, k;
	
	while(q--){
		cin >> l >> r >> k;
		l--;
		int odd = cum[r] - cum[l];
		int even = r - l + 2 - (cum[r] - cum[l]);
		
		if(k & 1){
			if((cum[n] + even) & 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else{
			if((cum[n] - odd) & 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
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

