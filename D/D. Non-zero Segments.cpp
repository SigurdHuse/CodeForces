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
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	
	ll cur = 0, ans = 0;
	
	set<ll> d;
	d.insert(0);
	for(int i = 0; i < n; ++i){
		cur += v[i];
		if(d.count(cur)){
			ans++;
			d.clear();
			d.insert(0);
			cur = v[i];
		}
		d.insert(cur);
	}
	
	cout << ans<< endl;	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

