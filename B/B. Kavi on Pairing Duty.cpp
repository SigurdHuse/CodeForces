#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 998244353;

const int N = 1e6 + 10;

int n, dp[N], S;

void solve(){
	cin >> n;
	memset(dp, 0, sizeof dp);
	for(int i = 1; i <= n; ++i){
		for(int j = i+i; j <= n; j += i){
			dp[j]++;
		}
	}
	dp[0] = S = 1;
	for(int i = 1; i <= n; ++i){
		dp[i] = (dp[i] + S) % M;
		S = (S + dp[i])% M;
	}
	cout << dp[n] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

