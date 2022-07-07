#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = 0;
	cin >> n;
	vector<ll> v(n);
	for(auto &x:v)cin >> x;
	for(int i = 0; i< n;++i){
		if(v[i] > 2*n) continue;
		for(int j = i+1; j < n;++j){
			if(v[i]*v[j] == i+j +2) ans ++;
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

