#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool ok(ll res, ll d){
	ll sum = res * (res + 1)/2;
	if(sum < d) return false;
	return sum % 2 == d % 2;
}

void solve(){
	ll a, b; cin >> a >> b;
	// a is always the largest number
	ll d = abs(a - b);
	if(d == 0){
		cout << 0 << "\n";
		return;
	}
	ll res = 1;
	while(!ok(res, d)) res++;
	cout << res << endl;
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

