#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 4e4 + 5, M = 1e9 + 7;

int dp[N];
vector<int> pals;

bool is_pal(int &n){
	string s = to_string(n);
	for(int i = 0; i < SZ(s)/2; ++i){
		if(s[i] != s[SZ(s) -i - 1]) return false;
	}
	return true;
}

void pre(){
	for(int i = 1; i <= N; ++i){
		if(is_pal(i)) pals.push_back(i);
	}
	dp[0] = 1;
	for(auto &x : pals){
		for(int j = x; j < N; j++){
			if(dp[j-x] > 0) dp[j] = (dp[j] + dp[j-x]) % M;
		}
	}
}

void solve(){
	int n; cin >> n;
	cout << dp[n] << "\n";
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	pre();
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

