#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 200005, M = 1e9 + 7;

int dp[N];

void solve(){
	int n, m; cin >> n >> m;
	int ans = 0;
	
	while(n > 0){
		int x = n % 10;
		ans += ((m + x < 10) ? 1 : dp[m + x - 10]);
		ans %= M;
		n /= 10;
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	
	for(int i = 0; i < 9; ++i) dp[i] = 2;
	dp[9] = 3;
	
	for(int i = 10; i < N; ++i){
		dp[i] = (dp[i-9] + dp[i-10]) %M;
	}
	
	while(tt--){
		solve();
	}
}

