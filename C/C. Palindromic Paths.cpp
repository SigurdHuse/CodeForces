#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 32;

int v[N][N];


void solve(){
	int n, m; cin >> n >> m;
	REP(i,n) REP(j,m) cin >> v[i][j];
	
	vector<vector<int>> cnt(n+m-1, vector<int>(2));
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cnt[i+j][v[i][j]]++;
		}
	}
	int ans = 0;
	for(int i = 0; i <= n+m-2; ++i){
		int j = n + m - 2 - i;
		if(i <= j) continue;
		ans += min(cnt[i][0] + cnt[j][0], cnt[i][1] + cnt[j][1]);
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

