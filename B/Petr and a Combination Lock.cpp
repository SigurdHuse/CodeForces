#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	vector<vector<int>> mask(n+1);
	mask[0] = {0};
	for(auto &x : v) cin >> x;
	for(int i = 0; i < n;++i){
		for(int j = 0; j < (int)mask[i].size();++j){
			mask[i+1].push_back((mask[i][j] +v[i])%360);
			mask[i+1].push_back((mask[i][j] -v[i])%360);
		}
	}
	for(int i : mask[n]){
		if(i == 0){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

