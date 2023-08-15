#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

const int N = 1e5 + 5;

ll ten[N];

void solve(){
	string s; cin >> s;
	int n = SZ(s);
	vector<ll> a(n);
	for(int i = 0; i < n; ++i) a[i] = s[i] - '0';
	
	ll ans = 0, sum = 0, p = 1;
	
	for(ll i = n - 1; i >= 0; --i){
		ll k = (i*(i+1) / 2 % M * p % M + sum) % M;
		sum = (sum + p * (n-i) % M) % M;
		p = p * 10 % M;
		ans = (ans + a[i] * k % M) % M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

