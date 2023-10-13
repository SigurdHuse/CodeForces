#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll nCr(ll n, ll r){
	if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

void solve(){
	ll n, k;cin >> n >> k;
	ll ans = 1;
	// n is 1
	// n-1 is n
	// n-2 is npr(n, 2)
	
	for(ll i = n -k + 1; i < n; ++i){
		ans += nCr(n, i);
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

