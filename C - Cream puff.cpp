#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n; cin >> n;
	set<ll> ans;
	for(ll d = 1; d*d <= n;d++){
		if(n % d == 0){
			ans.insert(d);
			ans.insert(n/d);
		}
	}
	for(auto x : ans) cout << x << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

