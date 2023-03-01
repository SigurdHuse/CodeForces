#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int h, w; cin >> h >> w;
	int ch, cw, dh, dw;
	cin >> ch >> cw >> dh >> dw;
	vector<string> board(h);
	for(auto &a : board) cin >> a;
	vector<bool> row(h), col(w);
	for(int i = 0; i < h; ++i){
		for(int j = 0; j < w; ++j){
			if(board[i][j] == '.'){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	if(ch < dh) swap(ch, dh);
	if(cw < dw) swap(cw, dw);
	ch--; cw--; dh--; dw--;
	int ans = 0, cnt = 0;
	for(int i = ch; i >= dh; --i){
		if(!row[i]){
			ans++;
			cnt++;
		}
		if(cnt == 2){
			cout << -1 << endl;
			return;
		}
		else cnt = 0;
	}
	cnt = 0;
	for(int i = cw; i >= dw; --i){
		if(!col[i]){
			ans++;
			cnt++;
		}
		if(cnt == 2){
			cout << -1 << endl;
			return;
		}
		else cnt = 0;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

