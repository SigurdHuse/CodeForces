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
	ll n; cin >> n;
	for(ll a = 0; a <= 200; ++a){
		for(ll b = 0; b <= 200; ++b){
			if((a + b)*(a + b) == n){
				cout << a << " " << b << "\n";
				return;
			}
		}
	}
	cout << "-1\n";
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

