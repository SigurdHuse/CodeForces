#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int indx = 0; 
	while(v[indx] == 0) indx++;;
	int ans = 0, cnt = 0;
	for(int i = indx; i < n; ++i){
		if(v[i]){
			ans += cnt;
			cnt = 0;
		}
		else cnt++;
	}
	cout << ans <<endl;
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

