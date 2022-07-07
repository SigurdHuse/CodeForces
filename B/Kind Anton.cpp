#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	bool has_pos = 0, has_neg = 0;
	REP(i,n){
		if(a[i] < b[i] && !has_pos){
			cout << "NO" << endl;
			return;
		}
		else if(a[i] > b[i] && !has_neg){
			cout << "NO" << endl;
			return;
		}
		if(a[i] == -1) has_neg = 1;
		else if(a[i] == 1) has_pos = 1;
		if(has_neg && has_pos){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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

