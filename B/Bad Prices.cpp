#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int mi = v[n-1], ans = 0;
	for(int i = n-2; i > -1; i--){
		if(v[i] <= mi){
			mi = v[i];
		}
		else ans++;
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

