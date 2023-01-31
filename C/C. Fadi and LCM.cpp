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
	ll x; cin >> x;
	ll a = 1, b = x;
	for(ll i = 1; i*i <= x; ++i){
		if((x % i == 0) && (__gcd(i, x/i) == 1)){
			//cout << i << " " << x/i << endl;
			//cout << __gcd(i, x/i) << endl;
			if(max(i, x /i) < max(a,b)){
				a = i;
				b = x/i;
			}
		}
	}
	cout << a << " " << b <<  endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

