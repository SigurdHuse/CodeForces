#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &w : v) cin >> w;
	int alice = 0, bob = 0, l = 0, r = n-1;
	int ans = 0, cnt = 0;
	while(l <= r){
		if(alice < bob){
			alice += v[l];
			l++;
		}
		else{
			bob += v[r];
			r--;
		}
		cnt++;
		if(alice == bob) ans = cnt;
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

