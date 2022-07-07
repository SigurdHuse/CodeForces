#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, last = 0, first = 0;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	for(int i = n-1; i>-1; --i){
		if(v[i] == 0){
			last = i + 1;
			break;
		}
	}
	for(int i = 0; i < n; ++i){
		if(v[i] == 0){
			first = i - 1;
			break;
		}
	}
	cout << last- first << endl;
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

