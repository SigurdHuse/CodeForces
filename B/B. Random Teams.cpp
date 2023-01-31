#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Max is when all are one except one
// Min is equally distributed

void solve(){
	ll m, n; cin >> n >> m;
	
	ll mx = n - m;
	ll min = n / m;
	
	ll extra = n % m;
	m -= extra;
	
	ll ans = min*(min + 1)/2 * extra;
	min--;
	ans += min*(min + 1)/2 * m;
	
	
	cout << ans << " " << mx*(mx + 1)/2 << endl;
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

