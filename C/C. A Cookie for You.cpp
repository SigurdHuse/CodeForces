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
	ll a, b, n, m; cin >> a >> b >> n >> m;
	
	if(n + m > a+ b){
		cout << "NO" << endl;
		return;
	}
	
	// Type 2 always takes from the one with the 
	// least amount left or if equal vanilla
	
	// Want type 2 to take as many vanilla cookies as possible
	
	while(n > 0 && m > 0){
		if(a > b){
			ll diff = min(a - b, n);
			
		}
	}
	
	
	
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

