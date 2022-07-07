#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n, q; cin>> n >> q;
	vector<ll> v(n);
	set<int> changed;
	for(auto &a : v) cin >> a;
	ll s = accumulate(all(v),0);
	ll val = -1;
	REP(k,q){
		ll t, i, x;
		cin >> t;
		if(t == 1){
			cin >> i>>x;
			i--;
			ll diff;
			if(val == -1){
				diff = x - v[i];
			}
			else{
				if(!changed.count(i)){
					diff = x - val;
					changed.insert(i);
				}
				else diff = x - v[i];
			}
			v[i] = x;
			s += diff;
		}
		else{
			cin >> x;
			changed.clear();
			val = x;
			s = x*n;
		}
		cout << s <<endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

