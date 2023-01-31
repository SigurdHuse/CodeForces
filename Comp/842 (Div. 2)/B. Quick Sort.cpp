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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int changed = 0, off = 0;
	
	vector<int> mem(n);
	vector<bool> seen(n+1);
	// Need to find how far we can go
	for(int i = 0; i< n; ++i){
		if(v[i] != i + 1 - off){
			changed++;
			off++;
		}
	}
	int ans = changed / k;
	if(changed % k > 0) ans++;
	cout << ans<< endl;
	
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

