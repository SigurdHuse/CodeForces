#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int s;




void solve(){
	int n; cin >> n >> s;
	int ans = 0;
	int dx, dy, x, y;
	for(int i = 0; i < n; ++i){
		cin >> dx >> dy >> x >> y;
		if(dx == dy) ans += (x == y);
		else ans += (x + y == s);
	}
	cout << ans << "\n";
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

