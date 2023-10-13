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
	int n; int l, r;
	cin >> n >> l>> r;
	ll zero = 0, one = 0, two = 0;
	
	for(int i = l; i <= min(l+2, r); ++i){
		if(i % 3 == 0){
			zero++;
			zero += (r - i)/3;
		}
		else if(i % 3 == 1){
			one++;
			one += (r - i)/3;
		}
		else{
			two++;
			two += (r - i)/3;
		}
	}
	vector<vector<ll>> dp(n, vector<ll>(3));
	dp[0][0] = zero;
	dp[0][1] = one;
	dp[0][2] = two;
	//cout << zero << " " << one << " " << two << "\n";
	for(int i = 1; i < n; ++i){
		if(zero > 0){
			dp[i][0] = (dp[i][0] + dp[i-1][0]*zero) % M;
			dp[i][1] = (dp[i][1] + dp[i-1][1]*zero) % M;
			dp[i][2] = (dp[i][2] + dp[i-1][2]*zero) % M;
		}
		if(one > 0){
			dp[i][0] = (dp[i][0] + dp[i-1][2]*one) % M;
			dp[i][1] = (dp[i][1] + dp[i-1][0]*one) % M;
			dp[i][2] = (dp[i][2] + dp[i-1][1]*one) % M;
		}
		if(two > 0){
			dp[i][0] = (dp[i][0] + dp[i-1][1]*two) % M;
			dp[i][1] = (dp[i][1] + dp[i-1][2]*two) % M;
			dp[i][2] = (dp[i][2] + dp[i-1][0]*two) % M;
		}
	}
	cout << dp[n-1][0] << "\n";
	 
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

