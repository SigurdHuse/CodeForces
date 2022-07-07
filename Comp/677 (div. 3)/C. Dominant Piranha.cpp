#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int mx = *max_element(all(v));
	if(v[0] == mx && v[1] < mx){
		cout << 1 << endl;
	}
	else if(v[n-1] == mx && v[n-2] < mx){
		cout << n<< endl;
	}
	else{
		for(int i = 1; i< n-1;++i){
			if(v[i] == mx && (v[i-1] < mx || v[i+1] < mx)){
				cout << i + 1 << endl;
				return;
			}
		}
		cout << -1 << endl;
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

