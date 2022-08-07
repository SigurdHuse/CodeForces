#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int total, ans = INT_MAX;
int m; 

void print(vector<vector<int>> &v){
	for(auto p : v){
		for(auto i : p) cout << i << " ";
		cout << endl;
	}
}

void search(int y, int x, int time, int visited, vector<vector<int>> &v){
	if(y < 0 || y > 1 || x < 0 || x >= m || v[y][x] < 0) return;
	if(visited == total){
		if(time <= v[y][x]) time = v[y][x] + 1;
		ans = min(ans, time);
		return;
	}
	if(time < v[y][x]) time = v[y][x] + 1;
	vector<vector<int>> tmp = v;
	tmp[y][x] = -1;
	if(y == 0){
		search(y+1, x, time + 1, visited + 1, tmp);
		search(y, x-1, time + 1, visited + 1, tmp);
		search(y, x+1, time + 1, visited + 1, tmp);
	}
	else{
		search(y-1, x, time + 1, visited + 1, tmp);
		search(y, x-1, time + 1, visited + 1, tmp);
		search(y, x+1, time + 1, visited + 1, tmp);
	}
}

void solve(){
	cin >> m;
	ans = INT_MAX;
	vector<vector<int>> v(2, vector<int>(m));
	REP(i,2) REP(j,m) cin >> v[i][j];
	total = 2*m;
	search(0,0,0,1, v);
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

