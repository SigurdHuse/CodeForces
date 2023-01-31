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
	string s1, s2; cin >> s1 >> s2;
	int n = SZ(s1);
	int off = 15;
	
	int last = off;
	
	for(int i = 0;i < n; ++i){
		if(s1[i] == '-') last--;
		else last++;
	}
	
	vector<double> dp(30);
	dp[0 + off] = 1;
	
	for(int i = 0; i < n; ++i){
		vector<double> new_dp(30);
		if(s2[i] == '+'){
			for(int j = 29; j > 0; --j) new_dp[j] = dp[j-1];
		}
		if(s2[i] == '-'){
			for(int j = 0; j < 29; ++j) new_dp[j] = dp[j+1];
		}
		if(s2[i] == '?'){
			for(int j = 1; j < 29; ++j){
				if(dp[j] > 0){
					//cout << j<< endl;
					new_dp[j-1] += dp[j];
					new_dp[j+1] += dp[j];
				}
			}
		}
		dp = new_dp;
		//for(auto k : dp) cout << k << " ";
		//cout << endl;
	}
	
	double s = accumulate(all(dp), 0);
	cout << setprecision(16);
	cout << dp[last] / s << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

