#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n; 
	vector<int> v(n);
	for(auto &a : v ) cin >> a;
	ll ans = 0;
	int l= 0; 
	for(int r = 0; r < n; ++r){
		if(v[r] >= r+1 - l){
			//cout << l << "  " << r << endl;
			ans += r - l + 1;
		}
		else{
			l = r;
			ans++;
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

