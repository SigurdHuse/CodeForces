#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for(auto &b : v)cin >> b;
	sort(v.begin(),v.end());
	ll extra = 0, ans = 0;
	for(int i = n - 1; i > -1; --i){
		if(v[i] >= x){
			ans++;
			extra += v[i] - x;
		}
		else if(extra + v[i] >= x){
			ans ++;
			extra -= x - v[i];
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
