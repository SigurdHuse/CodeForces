#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1005, M = 1000005;

int cl[N][N];

int cnt[M];

char board[N][N];

vector<pair<int,int>> dirs = {{1,0},{0,1},{-1,0},{0,-1}};

void solve(){
	memset(cl, -1, sizeof(cl));
	memset(cnt, 0, sizeof(cnt));
	memset(board, '0', sizeof(board));
	int n, m, k; cin >> n >> m >> k;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> board[i][j];
		}
	}
	
	int cur = 0;
	
	queue<pair<int,int>> q;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if((cl[i][j] == -1) && (board[i][j] == '.')){
				q.push({i,j});
				cl[i][j] = cur;
				
				while(q.size()){
					auto p = q.front(); q.pop();
					if((p.f == 0)||(p.s == 0)||(p.f == (n + 1))||(p.s == (m + 1))) continue;
					//if(board[p.f][p.s] == '*'){
						//cnt[cur]++;
						//continue;
					//}
					//if(cl[p.f][p.s] != -1) continue;
					
					
					for(auto dir : dirs){
						if(board[p.f + dir.f][p.s + dir.s] == '*') cnt[cur]++;
						
						else if(cl[p.f + dir.f][p.s + dir.s] == -1){
							cl[p.f + dir.f][p.s + dir.s] = cur;
							q.push({p.f + dir.f, p.s + dir.s});
						}
					}
				}
				cur++;
			}
		}
	}
	
	int x, y;
	
	while(k--){
		cin >> x >> y;
		cout << cnt[cl[x][y]] << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

