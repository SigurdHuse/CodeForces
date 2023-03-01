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

// If even every second minimum is 4 
// The other half is three
// If odd minimum is 2

void solve(){
	ll n; cin >> n;
	ll G = 1, ans = 0;
	for(int i = 1; G <= n; ++i){
		G = lcm(G,i);
		if(G > n) break;
		ans += n / G;
	}
	cout << (ans+n)%M << endl;
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

