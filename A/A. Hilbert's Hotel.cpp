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
	ll n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	set<ll> seen;
	
	ll next;
	
	for(ll i = 0; i < n; ++i){
		next = (v[i] + i)%n;
		if(next < 0){
			next += (abs(next)/n + 1)*n;
			next %= n;
		}
		
		if(seen.count(next)){
			cout << "NO" << endl;
			return;
		}
		seen.insert(next);
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

