#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 1e9 + 7;

void solve(){
	int n; cin >> n;
	vector<ll> v(n+1), dp(n+2);
	for(int i = 0; i < n; ++i) cin >> v[i];
	for(int i = 0; i <= n; ++i){
		dp[i+1] = (2*dp[i] + 2 - 2*dp[v[i]]) % M;
	}
	for(int i = 0; i <= n+1; ++i) cout << dp[i] << " ";
	cout << endl;
	cout << dp[n+1] << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

