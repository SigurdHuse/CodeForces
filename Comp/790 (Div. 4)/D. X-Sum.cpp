#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int N = 201, M = 201;

int a[N][M];

void solve(){
	int n, m; cin >> n >> m;
	REP(i,n) REP(j,m) cin>> a[i][j];
	vector<int> up(n + m - 1), down(n +m -1)
	
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

