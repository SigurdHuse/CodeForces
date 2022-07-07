#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	sort(v.begin(),v.end());
	int cnt = 0, ans = 0;
	while(cnt < k){
		ans = v[cnt];
		cnt++;
	}
	//cout << ans << endl;
	if(cnt == n) cout << ans << endl;
	else if(ans == 0) cout << (v[cnt] == 1 ? -1 : 1) << endl;
	else{
		if(ans != v[cnt]) cout << ans << endl;
		else cout << -1 << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

