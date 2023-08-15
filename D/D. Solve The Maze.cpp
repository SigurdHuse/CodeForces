#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 55;

char arr[N][N];

int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int n, m;

bool valid(int i, int j){
	return (i >= 1) && (i <= n) && (j >= 1) && (j <= m);
}

void solve(){
	cin >> n >> m;
	
	for(int i = 1; i <= n; ++i){
		cin >> (arr[i] + 1);
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if(arr[i][j] == 'B'){
				for(int k = 0; k < 4; ++k){
					int ni = i + dir[k][0];
					int nj = j + dir[k][1];
					//cout << ni << " " << nj << endl;
					if(valid(ni,nj) && (arr[ni][nj] == '.')){
						arr[ni][nj] = '#';
					}
				}
			}
		}
	}
	
	queue<pair<int,int>> q;
	bool visited[n+5][m+5];
	memset(visited, false, sizeof(visited));
	
	if(arr[n][m] == '.'){
		q.push({n,m});
		visited[n][m] = true;
	}
	
	while(q.size()){
		auto cur = q.front();
		q.pop();
		
		for(int k = 0; k < 4; ++k){
			int ni = cur.f + dir[k][0];
			int nj = cur.s + dir[k][1];
			
			if(valid(ni, nj) && !visited[ni][nj] && arr[ni][nj] != '#'){
				q.push({ni,nj});
				visited[ni][nj] = true;
			}
			
		}
	}
	
	bool good = true;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if((arr[i][j] == 'G' && !visited[i][j]) ||
			   (arr[i][j] == 'B' && visited[i][j])){
				   good = false;
				   break;
			   }
		}
	}
	
	//for(int i = 1; i <= n; ++i){
		//for(int j = 1; j <= m; ++j){
			//cout << arr[i][j];
		//}
		//cout << endl;
	//}
	
	cout << (good ? "Yes" : "No") << endl;
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

