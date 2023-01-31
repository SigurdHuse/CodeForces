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
	int n, x, m; cin >> n >> x >> m;
	int ml = x, mr = x;
	int l,r;
	
	for(int i = 0 ; i < m; ++i){
		cin >> l >> r;
		if(mr >= l && r >= ml){
			ml = min(l, ml);
			mr = max(r, mr);
		}
		//cout << ml << " " << mr << endl;
	}
	cout << mr - ml + 1 << endl;
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

