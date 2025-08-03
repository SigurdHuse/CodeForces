#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 505;

int a[N][N];

int check(int i, int mx) {
	return min(max(i, 0), mx);
}

void solve(){
	int n, m, k; cin >> n >> m >> k;
	k--;
	char c;
	int cnt = 0;
	vector<vector<int>> pre(n + 1, vector<int>(m +1));
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> c;
			pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
			if(c == '.') a[i][j] = 0;
			if(c == '#') a[i][j] = 1;
			if(c == 'g'){
				pre[i][j]++;
				cnt++;
				a[i][j] = 2;
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if(a[i][j] == 0){
				int mx_x = min(n, i + k), mi_x = min(max(0, i -k), n);
				int mx_y = min(m, j + k), mi_y = min(max(0, j -k), m);  
				
				int tmp = pre[mx_x][mx_y]; 
				tmp += pre[max(mi_x-1, 0)][max(mi_y-1,0)];
				tmp -= pre[max(0,mi_x-1)][mx_y];
				tmp -= pre[mi_x][max(0,mx_y-1)];
				ans = max(ans, cnt - tmp);
			}
		}
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

