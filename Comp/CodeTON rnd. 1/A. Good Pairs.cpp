#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int i = max_element(all(v)) - v.begin();
	int j = min_element(all(v)) - v.begin();
	cout << i+ 1 << " " << j + 1 << endl;
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

