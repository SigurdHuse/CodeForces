#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

int f(int x, int y){
	return x & ~y;
}

void solve(){
	int n; cin >> n;
	vector<int> v(n), ans(n);
	for(auto &x : v) cin >> x;
	for(int i = 1; i< n;++i){
		ans[i] = f(ans[i-1]^v[i-1], v[i]);
	}
	for(int i : ans) cout << i <<  " ";
	cout << endl;
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

