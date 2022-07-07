#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int inc = 0;
	for(int i = 0; i <n;++i){
		if(v[i] != v[i+1]){
			inc = v[i+1] - v[i];
			break;
		}
	}
	ll ans = 0;
	if((v[n-1] - v[0])%inc != 0) inc = 1;
	int mx = v[n-1];
	for(int i = 0; i< n; ++i){
		ans += (mx - v[i])/inc;
	}
	cout << ans << " " << inc << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

