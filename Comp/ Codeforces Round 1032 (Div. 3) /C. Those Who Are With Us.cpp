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
	int n, m; cin >> n>> m;
	int a[n][m];
	int mx = -1e9;
	REP(i,n){
		REP(j,m){
			cin >> a[i][j];
			mx = max(a[i][j], mx);
		}
	}
	
	vector<vector<int>> cnt(n, vector<int>(m));
	int mx_cnt = -1e9, mx_row = -1, mx_col = -1;
	
	for(int i = 0; i < n; ++i){
		int cur = 0;
		for(int j = 0; j < m; ++j){
			if(a[i][j] == mx){
				cur++;
			}
		}
		REP(j,m){
			cnt[i][j] += cur;
		}
	}
	for(int j = 0; j < m; ++j){
		int cur = 0;
		for(int i = 0; i < n; ++i){
			if(a[i][j] == mx){
				cur++;
			}
		}
		REP(i,n){
			cnt[i][j] += cur;
			if(a[i][j] == mx)cnt[i][j] -= 1;
			if(cnt[i][j] > mx_cnt){
				mx_cnt = cnt[i][j];
				mx_row = i;
				mx_col = j;
			}
		}
	}
	//REP(i,n){
	//	REP(j,m){
	//		cout << cnt[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
	//cout << mx_row << " " << mx_col << endl;
	REP(j, m) a[mx_row][j]--;
	REP(i, n) a[i][mx_col]--;
	a[mx_row][mx_col]++;
	int ans = -1;
	REP(i,n) REP(j,m) ans = max(ans, a[i][j]);
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

