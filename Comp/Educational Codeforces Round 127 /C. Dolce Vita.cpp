#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, x; cin >> n >> x;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	ll off = 0;
	ll start = n-1, ans = 0;
	for(int i = 0; i< n; ++i){
		if(v[i] > x){
			start = i-1;
			break;
		}
	}
	while((start > -1) && (v[0] + off <= x)){
		int days = x - v[start] - off + 1;
		ans += (start+1)*days;
		off += days;
		while((start > -1) && (v[start] + off > x)) start--;
		cout << ans << endl;
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

