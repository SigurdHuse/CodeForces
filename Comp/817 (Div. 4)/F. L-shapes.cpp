#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool ok = 1;

int n, m; 

int cnt = 0;

const vector<pair<int,int>> dir = {{1,1}, {1,0}, {1,-1},
							       {0,1}, {0,-1},
							       {-1,1}, {-1,0}, {-1,-1}};

void check(int y, int x, vector<string> &v){
	if(y >= n || y < 0 || x >= m || x < 0 || v[y][x] == '.') return;
	//cout << y << " " << x << endl;
	cnt++;
	v[y][x] = '.';
	if(cnt > 3){
		//cout << y << x << endl;
		ok = 0;
		return;
	}
	for(auto p : dir){
		check(y + p.f, x + p.s, v);
	}
}

void solve(){
	cin >> n >> m;
	vector<string> v(n);
	for(auto &a : v) cin >> a;
	ok = 1;
	
	// check if L
	bool l = 1;
	for(int y = 0; y < n; ++y){
		for(int x = 0; x < m; ++x){
			if(v[y][x] == '*'){
				l = 0;
				if(y > 0){
					if(x > 0){
						if(v[y-1][x] == '*' && v[y-1][x-1] == '*') l = 1;
						if(v[y][x-1] == '*' && v[y-1][x-1] == '*') l = 1;
						if(v[y-1][x] == '*' && v[y][x-1] == '*')   l = 1;
					}
					if(x < m-1){
						if(v[y-1][x] == '*' && v[y-1][x+1] == '*') l = 1;
						if(v[y][x+1] == '*' && v[y-1][x+1] == '*') l = 1;
						if(v[y-1][x] == '*' && v[y][x+1] == '*')   l = 1;
					}
				}
				if(y < n-1){
					if(x > 0){
						if(v[y+1][x] == '*' && v[y+1][x-1] == '*') l = 1;
						if(v[y][x-1] == '*' && v[y+1][x-1] == '*') l = 1;
						if(v[y][x-1] == '*' && v[y+1][x] == '*')   l = 1;
					}
					if(x < m-1){
						if(v[y+1][x] == '*' && v[y+1][x+1] == '*') l = 1;
						if(v[y][x+1] == '*' && v[y+1][x+1] == '*') l = 1;
						if(v[y][x+1] == '*' && v[y+1][x] == '*')   l = 1;
					} 
				}
				if(!l){
					//cout << y <<" " << x << endl;
					cout << "NO" << endl;
					//cout << "NO L" << endl;
					return;
				}
			}
		}
	}
	
	for(int y = 0; y < n; ++y){
		for(int x = 0; x < m; ++x){
			if(v[y][x] == '*'){
				cnt = 0;
				check(y, x, v);
			}
			if(!ok){
				cout << "NO" << endl;
				return;
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

