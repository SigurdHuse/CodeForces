#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k, last; cin >> n>> k;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	/*
	int mx = *max_element(all(v));
	int cnt = count(all(v),mx);
	ll s = 0;
	*/
	sort(all(v));
	ll s= 0;
	bool has_zero = 1;
	for(int i = 0; i< n- 1;++i){
		if(v[i] - s == 0) has_zero = 1;
		last = v[i] - s;
		s += last;
		cout << s <<endl;
	}
	//if(has_zero) 
	cout << (v[n-1] - s == k ? "YES": "NO") << endl;
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

