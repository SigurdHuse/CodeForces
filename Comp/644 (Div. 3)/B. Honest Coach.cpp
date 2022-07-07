#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> s(n);
	for(auto &x : s) cin >> x;
	int ans = INT_MAX;
	for(int i = 0; i< n; ++i){
		for(int j = i + 1; j < n; ++j){
			ans = min(ans, abs(s[i] - s[j]));
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

