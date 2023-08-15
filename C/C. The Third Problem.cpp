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

int a[N], pos[N];

// if a[i] = 0 then b[i] needs to be 0

void solve(){
	int n; cin >> n;
	REP(i,n){
		cin >> a[i];
		pos[a[i]] = i;
	}
	
	ll l = pos[0], r = pos[0];
	ll ans = 1;
	for(ll i = 1; i < n; ++i){
		if(pos[i] < l) l= pos[i];
		else if(pos[i] > r) r = pos[i];
		else ans = ans*(r - l + 1 - i) %M;
	}
	cout << ans << endl;
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

