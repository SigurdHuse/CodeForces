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
	int w,d,h; cin >> w >> d >> h;
	int a, b, f, g; cin >> a >> b >> f >> g;
	
	int ans = INT_MAX, cur = 0;
	
	// Right wall
	cur += w - a;
	cur += w - f;
	cur += abs(b - g);
	ans = min(ans, cur);
	cur = 0;
	
	// left wall
	cur += a;
	cur += f;
	cur += abs(b - g);
	ans = min(ans, cur);
	cur = 0;
	
	// Front wall
	cur += b;
	cur += g;
	cur += abs(a - f);
	ans = min(ans, cur);
	cur = 0;
	
	// Back wall
	cur += d - b;
	cur += d - g;
	cur += abs(a - f);
	ans = min(ans, cur);
	cur = 0;
	
	cout << ans + h << endl;
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

