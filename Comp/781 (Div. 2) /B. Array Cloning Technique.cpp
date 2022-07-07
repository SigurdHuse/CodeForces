#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, a; cin >> n;
	map<int,int> mem;
	for(int i = 0; i< n; ++i){
		cin >> a;
		mem[a]++;
	}
	int mx = 0, doubles = 0; 
	for(auto p : mem) mx = max(mx,p.second);
	int ans = n - mx;
	ll tmp = mx;
	while(tmp < n){
		doubles++;
		tmp *= 2;
	}
	cout << ans + doubles << endl;
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

