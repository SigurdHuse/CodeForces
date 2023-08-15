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
	int ans = 0;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int cur = 0;
	for(int i = 0; i < n; ++i){
		if(v[i] == 0) cur++;
		else cur = 0;
		ans = max(ans, cur);
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

