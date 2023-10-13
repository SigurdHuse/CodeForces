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
	int a[n][m];
	REP(i,n) REP(j,m) cin >> a[i][j];
	vector<int> cnt(m+1);
	
	for(int col = 0; col < m; ++col){
		int flag = 1;
		for(int row = 1; row < n; ++row){
			if(a[row][col] < a[row-1][col]) flag = 0;
		}
		cnt[col + 1] = flag;
	}
	for(int i = 1; i <= m; ++i) cnt[i] += cnt[i-1];
	int k; cin >> k;
	
	while(k--){
		int l, r; cin >> l >> r;
		cout << (cnt[r] - cnt[l-1] > 0 ? "Yes\n" : "No\n");
	}
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

