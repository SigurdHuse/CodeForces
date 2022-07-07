#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

char board[8][8];

const int n = 8;

void solve(){
	REP(i,n) REP(j,n) cin >> board[i][j];
	for(int i = 1; i < n-1;i++){
		for(int j = 1; j < n-1; ++j){
			if(board[i][j] == '#'){
				if(board[i-1][j-1] == '#' && board[i-1][j+1] == '#'){
					cout << i+1 << " " << j+1 << endl;
					return;
 				}
			}
		}
	}
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

