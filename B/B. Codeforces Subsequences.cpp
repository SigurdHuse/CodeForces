#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	ll k; cin >> k;
	string ans = "codeforce";
	string tmp = "codeforces";
	ll before, after;
	ll mx = INT_MAX;
	
	for(ll i = 0; i <= 1e5; ++i){
		ll needed = k / (i+1) + (k % (i+1) > 0);
		
		if(needed + i < mx){
			before = i;
			after = needed;
			mx = needed + i;
		}
	}
	REP(i,before) ans += "e";
	REP(i,after) ans += "s";
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

