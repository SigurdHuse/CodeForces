#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n,m, sx, sy, d;

/*
void search(int steps, int x, int y){
	if(y <= 0 || x <= 0 || y > m || x > n) return;
	if(abs(sx - x) + abs(sy - y) <= d) return;
	if(x == n && y == m){
		ans = min(ans, steps);
		return;
	}
	if(steps >= mem[x][y]) return;
	mem[x][y] = min(mem[x][y], steps);
	search(steps + 1, x+1, y);
	search(steps + 1, x, y+1);
	if(y >= sy) search(steps + 1, x, y-1); 
	if(x >= sx)search(steps + 1, x-1, y); 
 
}
*/

void solve(){
	int ans = -1;
	cin >> n >> m >> sx >> sy >> d;
	
	//REP(i,n+1) REP(j,m+1) mem[i][j] = INT_MAX;
	if(sy + d >= m && sy - d <= 1) ans = -1;
	else if(sy + d >= m && sx + d >= n) ans = -1;
	else if(sy - d <= 1 && sx - d <= 1) ans = -1;
	else if(sx + d >= n && sx - d <= 1) ans = -1;
	else ans = n + m - 2; 
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

