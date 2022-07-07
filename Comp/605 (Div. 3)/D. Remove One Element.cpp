#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), mem;
	for(auto &a : v) cin >> a;
	int ans = 1;
	vector<int> rg(n,1);
	for(int i = n - 2; i >= 0; --i){
		if(v[i+1] > v[i]) rg[i] = rg[i+1] + 1;
		ans = max(ans, rg[i]);
	}
	
	vector<int> lf(n,1);
	for(int i = 1; i< n; ++i){
		if(v[i-1] < v[i])lf[i] = lf[i-1] + 1;
		ans = max(ans, lf[i]);
	}
	
	for(int i = 0; i< n - 2; ++i){
		if(v[i] < v[i+2]) ans = max(ans, lf[i] + rg[i+2]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

