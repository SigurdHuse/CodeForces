#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	sort(all(v));
	for(int i = 0; i< n-2; ++i){
		if((v[i] == v[i+1])&& (v[i] == v[i+2])){
			cout << v[i] << endl;
			return;
		}
	}
	cout << -1 << endl;
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

