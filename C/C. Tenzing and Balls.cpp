#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

int a[N];

void solve(){
	int n; cin >> n;
	if(n == 1){
		cout << 0 << "\n";
		return;
	}
	for(int i = 1; i <= n; ++i) cin >> a[i];
	vector<int> G[n+1];
	
	for(int i = 1; i <= n; ++i){
		G[a[i]].push_back(i);
	}
	vector<int> dp(n+2, 0);
	
	for(int i = 1; i <= n; ++i){
		dp[i] = max(dp[i], dp[i-1]);
		if(a[i] == a[i-1]) continue;
		for(int next : G[a[i]]){
			if(next <= i) continue;
			dp[next+1] = max(dp[next+1], dp[i] + next - i +1);
		}
	}
	//for(int i : dp) cout << i << " ";
	//cout << "\n";
	cout << max(dp[n+1], dp[n]) << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	a[0] = -1; a[N-1] = -1;
	while(tt--){
		solve();
	}
}

