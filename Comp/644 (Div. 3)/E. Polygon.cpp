#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 


void solve(){
	int n; cin >> n;
	vector<string> board(n+1);
	REP(i,n){
		cin >> board[i];
		board[i] += "0";
	}
	board[n] = board[n-1];
	REP(i,n+1) board[n][i] = '1';
	REP(i,n) board[i][n] = '1';
	/*
	REP(i,n+1){
		REP(j,n+1) cout << board[i][j];
		cout << endl;
	}
	*/
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; ++j){
			if(board[i][j] == '1'){
				if((board[i+1][j] == '0') && (board[i][j+1] == '0')){
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
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

