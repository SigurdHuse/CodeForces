#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	sort(v.begin(),v.end());
	int cnt = 0, ans = 0;
	REP(i, n){
		cnt++;
		if(v[i] <= cnt){
			cnt = 0;
			ans ++;
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

