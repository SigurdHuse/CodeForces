#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

const int N = 75;
const int INF = 1e9;

int a[N][N];
int dp[N][N][N][N];

void solve(){
	int n, m, k; 
	cin >> n >> m>> k;
	REP(i,n)REP(j,m) cin >> a[i][j];
	REP(i,N)REP(j,N)REP(cnt,N)REP(rem,N)dp[i][j][cnt][rem] = -INF;
	dp[0][0][0][0] = 0;
	for(int i = 0; i< n; ++i){
		for(int j = 0; j <m; ++j){
			for(int cnt = 0; cnt < m/2 + 1; ++m){
				for(int rem = 0; rem < k; rem++){
					if(dp[i][j][cnt][rem] == -INF) continue;
					int ni = (j == m -1 ? i + 1 : i);
					int nj = (j == m-1  ? 0 : j+1);
					if(i != ni){
						dp[ni][nj][0][rem] = max(dp[ni][nj][0][rem], dp[i][j][cnt][rem]);
					}
					else{
						dp[ni][nj][cnt][rem] = max(dp[ni][nj][cnt][rem], dp[i][j][cnt][rem]);
					}
					if(cnt +1 <= m/2){
						int nrem = (rem + a[i][j])%k;
						if(i != ni){
							dp[ni][nj][0][nrem] = max(dp[ni][nj][0][nrem], dp[i][j][cnt][rem] + a[i][j]);
						}
						else{
							dp[ni][nj][cnt + 1][nrem] = max(dp[ni][nj][cnt + 1][nrem], dp[i][j][cnt][nrem] + a[i][j]);
						}
					}
				}
			}
		}
	}
	cout << max(0, dp[n][0][0][0]) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

