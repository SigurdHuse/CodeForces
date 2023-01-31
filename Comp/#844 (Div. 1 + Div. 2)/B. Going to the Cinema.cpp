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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	int cnt = 0;
	bool ok = 0;
	int ans = (v[0] != 0);
	
	
	for(int i = 0; i < n; ++i){
		if(v[i] > cnt){
			ans += ok;
			ok = 0;
		}
		else ok = 1;
		cnt++;
	}
	if(v[n-1] <= n-1) ans++;
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

