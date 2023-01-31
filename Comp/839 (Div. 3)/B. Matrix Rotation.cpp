#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int board[2][2];
int tmp[2][2];

bool is_but(){
	bool col = (board[0][0] < board[1][0]) & (board[0][1] < board[1][1]);
	bool row = (board[0][0] < board[0][1]) & (board[1][0] < board[1][1]);
	return col and row;
}

void rotate(){
	tmp[0][0] = board[0][0];
	tmp[1][0] = board[1][0];
	tmp[0][1] = board[0][1];
	tmp[1][1] = board[1][1];
	
	board[0][0] = tmp[1][0];
	board[0][1] = tmp[0][0];
	board[1][0] = tmp[1][1];
	board[1][1] = tmp[0][1];
}

void solve(){
	cin >> board[0][0] >> board[0][1];
	cin >> board[1][0] >> board[1][1];
	
	for(int i = 0; i <= 5; ++i){
		if(is_but()){
			cout << "YES" << endl;
			return;
		}
		rotate();
	}
	cout << "NO" << endl; 
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

