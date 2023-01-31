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
	vector<int> a(n), b(n), v(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	for(int i = 0; i < n; ++i){
		v[i] = a[i] - b[i];
	}
	sort(all(v));
	
	ll ans = 0;
	//for(int i : v) cout << i << " ";
	//cout << endl;
	for(int i = 0; i < n; ++i){
		if(v[i] <= 0) continue;
		int pos = lower_bound(all(v), -v[i] + 1) - v.begin();
		ans += i - pos;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

