#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<pair<int,int>> dir = {{0,1}, {1,0},{0,-1},{-1,0}};

void solve(){
	int n; cin >> n;
	
	vector<vector<int>> v(n, vector<int>(n));
	
	int mi = 2, mx = n*n;
	int mid = mx / 2;
	queue<pair<int,int>> q;
	v[0][0] = 1;
	q.push({0,0});
	int wanted;
	while(q.size()){
		auto cur = q.front(); q.pop();
		for(auto d : dir){
			if((cur.f + d.f < 0) || (cur.f + d.f >= n)) continue;
			if((cur.s + d.s < 0) || (cur.s + d.s >= n)) continue;
			if(v[cur.f + d.f][cur.s + d.s] != 0) continue;
			
			if(v[cur.f][cur.s] <= mid){
				wanted = mx;
				mx--;
			}
			else{
				wanted = mi;
				mi++;
			}
			v[cur.f + d.f][cur.s + d.s] = wanted;
			q.push({cur.f + d.f, cur.s + d.s});
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << v[i][j] << " ";
		}
		cout << endl;
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

