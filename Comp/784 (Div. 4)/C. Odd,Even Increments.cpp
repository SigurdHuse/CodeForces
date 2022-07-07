#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	for(int i = 2; i< n; i += 2){
		if((a[i]%2) != (a[i-2]%2)){
			cout << "NO" << endl;
			return;
		}
	}
	for(int i = 3; i< n; i += 2){
		if((a[i]%2) != (a[i-2]%2)){
			cout << "NO" << endl;
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

