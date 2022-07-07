#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

int dist(string& one, string& two){
	int ans = 0, m = one.size(); 
	for(int i = 0;i < m; ++i){
		ans += abs(one[i] - two[i]);
	}
	return ans;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	int ans = INT_MAX;
	for(int i = 0;i < n; ++i){
		for(int j = i+1; j < n; ++j){
			ans = min(ans, dist(v[i], v[j]));
		}
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

