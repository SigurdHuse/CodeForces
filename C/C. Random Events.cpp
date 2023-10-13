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
	int n, m; cin >> n >> m;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	vector<double> dp(n+1, 1.0);
	
	for(int i = 0; i < m; ++i){
		int r; double p;
		cin >> r >> p;
		dp[r-1] *= (1.0 - p);
	}
	for(int i = n-1; i >= 0; --i){
		dp[i] *= dp[i+1];
		if(v[i] != (i+1)){
			cout << 1.0 - dp[i] << "\n";
			return;
		}
	}
	cout << 1.0 << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	cout << setprecision(16);
	while(tt--){
		solve();
	}
}

