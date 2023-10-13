#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 25;

char a[N][N];

void solve(){
	int n, m; cin >> n >> m;
	REP(i,n) REP(j,m) cin >> a[i][j];
	string s = "vika";
	int idx = 0;
	
	for(int col = 0; col < m; ++col){
		for(int row = 0; row < n; ++row){
			if(a[row][col] == s[idx]){
				idx++;
				break;
			}
		}
		if(idx == 4) break;
	}
	cout << (idx == 4 ? "YES" : "NO") << "\n";
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

