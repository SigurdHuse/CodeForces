#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), ans(3*n);
	for(auto &x : v) cin >> x;
	int l = 0, r = n-1;
	int l_d = 3*n/2, r_d = 3*n/2 + 1;
	if(v[l] != n && v[r] != n){
		cout << -1 << endl;
		return;
	}
	while(l != r){
		if(v[l] < v[r]){
			ans[l_d] = v[l];
			l_d--;
			l++;
		}
		else{
			ans[r_d] = v[r];
			r_d++;
			r--;
		}
	}
	if(v[l] < v[r]){
		ans[l_d] = v[l];
		l_d--;
		l++;
	}
	else{
		ans[r_d] = v[r];
		r_d++;
		r--;
	}
	for(int i : ans){
		if(i != 0) cout << i << " ";
	}
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

