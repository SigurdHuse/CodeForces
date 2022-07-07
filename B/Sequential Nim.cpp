#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &b : v) cin >> b;
	int k = 0;
	while(k < n && v[k] == 1){
		k++;
	}
	cout << ((k==n) ^ (k%2) ? "Second" :"First") <<endl;
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

