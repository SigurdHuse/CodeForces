#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	vector<ll> v(3);
	for(auto &x : v) cin >> x;
	sort(all(v));
	ll a = v[1];
	ll diff = v[1] - v[0];
	v[2] -= diff;
	cout << a + v[2]/2;
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

