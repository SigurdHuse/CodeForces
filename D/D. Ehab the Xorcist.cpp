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
	ll u, v; cin >> u >> v;
	if(u > v || (u % 2 != v % 2)){
		cout << -1 << endl;
		return;
	}
	if(u == v){
		
		if(!u) cout << 0 << endl;
		else cout << 1 << endl << u << endl;
		return;
	}
	ll x = (v - u)/2;
	if(u & x){
		cout << 3 << endl;
		cout << u << " " << x << " " << x << endl;
	}
	else cout << 2 << endl << (u^x) << " " << x << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

