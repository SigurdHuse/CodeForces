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
	vector<int> dp(n,-1), v(n);
	for(auto &x : v) cin >>x;
	for(int i = 1; i <= min(n-1, v); ++i){
		dp[i] = 0;
	}
	dp[0] = v[0];
	int ans = v[0];
	for(int i = 1; i < n; ++i){
		
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

