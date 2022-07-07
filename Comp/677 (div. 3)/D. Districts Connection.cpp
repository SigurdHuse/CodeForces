#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, indx = 0; cin >> n;
	vector<int> v(n);
	vector<pair<int,int>> ans(n-1);
	for(auto &x : v) cin >> x;
	for(int i = 0; i< n; ++i){
		for(int j = 0; j < n; ++j){
			if(abs(v[i]) != abs(v[j]) && v[j] > 0){
				v[j] = -v[j];
				ans[indx] = {i+1,j+1};
				indx++;
			}
		}
		if(i == 0) v[0] = -v[0];
	}
	if(!all_of(all(v), [](int i){return i < 0;})) cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		for(auto p : ans){
			cout << p.first << " " << p.second << endl;
		}
	}
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

