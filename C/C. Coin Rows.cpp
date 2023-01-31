#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int a[2][100005];

const int INF = 2e9 + 10;

void solve(){
	int m; cin >> m;
	for(int i = 0; i < 2; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}
	// Find out when it's optimal to go down
	int ans = INF;
	int sum1 = 0, sum2 = 0;
	REP(i,m) sum1 += a[0][i];
	for(int i = 0; i < m; ++i){
		sum1 -= a[0][i];
		ans = min(ans, max(sum1,sum2));
		sum2 += a[1][i];
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

