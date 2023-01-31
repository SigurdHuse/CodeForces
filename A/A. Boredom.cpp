#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll cnt[100005];

void solve(){
	int n,a; cin >> n;
	REP(i, 100005) cnt[i] = 0;
	vector<ll> dp(100005);
	//vector<ll> v(n);
	
	REP(i,n){
		cin >> a;
		cnt[a] += a;
		//v[i] = a;
	}
	
	dp[1] = cnt[1];
	dp[2] = max(cnt[1],cnt[2]);
	
	for(int i = 3; i < 100005; ++i){
		dp[i] = max(dp[i-1], dp[i-2] + cnt[i]);
	}
	//for(int i = 1; i <= 4; ++i) cout << dp[i] << " ";
	//cout << endl;
	cout << dp[100004] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

