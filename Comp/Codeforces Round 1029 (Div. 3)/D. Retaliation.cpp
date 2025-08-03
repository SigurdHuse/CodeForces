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
	for(auto &x : v) cin >> x;
	ll a = 2*v[0] - v[1], b = -n*v[0] + n*v[1] + v[0];
	if(a < 0 || b < 0){
		cout << "NO\n";
		return;
	}
	if(a % (n + 1) != 0 || b % (n + 1) != 0){
		cout << "NO\n";
		return;
	}
	a /= n + 1;
	b /= n + 1;
	//cout << a << " " << b << endl; 
	for(int i = 1; i <= n; ++i){
		if(b * i + a * (n - i + 1) != v[i-1]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

