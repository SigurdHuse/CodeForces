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
	ll n, k; cin >> n >> k;
	
	if(n & 1){
		cout << 1 << " " << n/2 << " " << n/2 << endl;
	}
	else if((n%2 == 0) && n%4) cout << 2 << " " << n/2 -1 << " " << n/2 - 1 << endl;
	else cout << n/2 << " " << n/2 << " " << n/4 << endl;
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

