#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<char>> board(n+1, vector<char>(m));
	REP(i,n)REP(j,m) cin >> board[i][j];
	REP(j,m) board[n][j] = 'o';
	int cnt = 0;
	for(int j = 0; j < m; ++j){
		for(int i = 0; i < n+1; ++i){
			if(board[i][j] == '*'){
				board[i][j] = '.';
				cnt++;
			}
			else if(board[i][j] == 'o'){
				for(int col = i-1; cnt > 0; cnt--, col--){
					board[col][j] = '*';
				}
				cnt = 0;
			}	
		}
		cnt = 0;
	}
	REP(i,n){
		REP(j,m){
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << endl;
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

