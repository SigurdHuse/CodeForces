#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, l, r; cin >> n >> l >> r;
	int ans = 0;
	unordered_map<int,int> mem;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	for(int i : v) mem[i]++;
	for(int i : v){
		mem[i]--;
		for(int j = max(1,l-i); j <= r-i;++j){
			ans += mem[j];
		}
	}
	cout << ans << endl;
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

