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
	ll l, r; cin >> l >> r;
	queue<ll> q;
	for(int i = 1; i <= 9; ++i){
		q.push(i);
	}
	
	while(q.size()){
		ll cur = q.front(); q.pop();
		
		if(cur > r) continue;
		if(cur >= l){
			cout << cur << endl;
			return;
		}
		ll ex = cur % 10;
		cur = (cur * 10) + ex;
		q.push(cur);
	}
	ll num, ans = 10;
	for(ll i = l; i <= r; ++i){
		ll tmp = i;
		ll mx = 0, mi = 10;
		while(tmp > 0){
			mx = max(mx, tmp % 10);
			mi = min(mi, tmp % 10);
			tmp /= 10;
		}
		if(mx - mi < ans){
			ans = mx - mi;
			num = i;
		}
		if(ans == 1) break;
	}
	cout << num << endl;
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

