#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, l, r; cin >> n;
	vector<pair<int,int>> v(n);
	for(int i = 0; i< n; ++i){
		cin >> l >> r;
		v[i] = {l,r};
	}
	int mx = 0, cnt = 0;
	for(auto p : v){
		
	}
	cout << n - mx << endl;
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

