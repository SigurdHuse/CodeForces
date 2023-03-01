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
	int v; cin >> v;
	// First is length second is last
	vector<pair<int,int>> dp(v + 1, {-1,0});
	vector<int> c(10);
	dp[0].f = 0;
	for(int i = 1; i < 10; ++i) cin >> c[i];
	
	if(*min_element(c.begin()+1, c.end()) > v){
		cout << "-1\n";
		return;
	}
	
	int idx = -1, mx = 0;
	for(int i = 0; i <= v; ++i){
		if(dp[i].f == -1) continue;
		for(int j = 1; j < 10; ++j){
			if(i + c[j] > v) continue;
			if(dp[i].f + 1 > dp[i + c[j]].f){
				dp[i + c[j]].f = dp[i].f + 1;
				dp[i + c[j]].s = j;
			}
			else if(dp[i].f + 1 == dp[i + c[j]].f){
				dp[i + c[j]].s = max(dp[i + c[j]].s, j);
			}
		}
		if(dp[i].f > mx){
			mx = dp[i].f;
			idx = i;
		}
	}
	string ans = "";
	while(idx > 0){
		ans += to_string(dp[idx].s);
		idx -= c[dp[idx].s];
	} 
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

