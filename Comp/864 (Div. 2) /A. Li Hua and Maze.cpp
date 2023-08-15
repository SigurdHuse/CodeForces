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
	int n, m; cin >> n >> m;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	// Place 4 obstacles around (x2, y2)
	int ans = 4;
	
	// Check if in corner
	if(y2 == 1 && x2 == 1){
		ans = min(ans, 2);
	}
	if(y2 == m && x2 == 1){
		ans = min(ans, 2);
	}
	if(y2 == m && x2 == n){
		ans = min(ans, 2);
	}
	if(y2 == 1 && x2 == n){
		ans = min(ans,2);
	}
	
	// Check if along edge
	if(y2 == 1){
		ans = min(ans, 3);
	}
	if(y2 == m){
		ans = min(ans, 3);
	}
	
	if(x2 == 1){
		ans = min(ans, 3);
	}
	
	if(x2 == n){
		ans = min(ans, 3);
	}
	
	// Check if in corner
	if(y1 == 1 && x1 == 1){
		ans = min(ans, 2);
	}
	if(y1 == m && x1 == 1){
		ans = min(ans, 2);
	}
	if(y1 == m && x1 == n){
		ans = min(ans, 2);
	}
	if(y1 == 1 && x1 == n){
		ans = min(ans,2);
	}
	
	// Check if along edge
	if(y1 == 1){
		ans = min(ans, 3);
	}
	if(y1 == m){
		ans = min(ans, 3);
	}
	
	if(x1 == 1){
		ans = min(ans, 3);
	}
	
	if(x1 == n){
		ans = min(ans, 3);
	}
	
	
	cout << ans << endl;
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

