#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), indx(n);
	for(int i = 0; i < n; ++i) indx[i] = i;
	for(auto &a : v) cin >> a;
	sort(all(indx), [&](int i, int j){return v[i] > v[j];});
	int x = 0;
	ll ans = 0;
	for(int i : indx){
		ans += v[i]*x;
		ans++;
		x++;
	}
	cout << ans << endl;
	for(int i : indx) cout << i + 1 << " ";
	cout << endl;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

