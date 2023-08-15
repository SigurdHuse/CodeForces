#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e3 + 5, mx = (1 << 8);

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	
	for(int x = 0; x < mx; ++x){
		int cur = 0;
		for(int i = 0; i < n; ++i){
			cur ^= (a[i] ^ x);
		}
		if(cur == 0){
			cout << x << endl;
			return;
		}
	}
	cout << -1 << endl;
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

