#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n + 1);
	vector<vector<int>> ops;
	vector<bool> seen(n+1), mem(n+1);
	REP(i, n+1) v[i] = i;
	
	for(int j = 2; j <= n; ++j){
		if(seen[j]) continue;
		vector<int> cur = {};
		for(int i = j; i <= n; i += j){
			seen[i] = 1;
			if(i <= n){
				cur.push_back(i);
			}
		}
		ops.push_back(cur);
	}
	
	for(int i = SZ(ops) - 1; i>= 0; --i){
		if(SZ(ops[i]) == 1) continue;
		int idx = 0;
		
		while(idx < SZ(ops[i]) && mem[ops[i][idx]]) idx++;
		if(idx == SZ(ops[i])) continue;
		
		int cur = ops[i][idx];
		
		for(int j = idx+1; j < SZ(ops[i]); ++j){
			if(mem[ops[i][j]]) continue;
			
			//cout << cur << " " << ops[i][j] << endl;
			
			mem[cur] = 1;
			swap(v[cur], v[ops[i][j]]);
			cur = ops[i][j];
		}
		mem[cur] = 1;
	}
	
	REP(i,n) cout << v[i+1] << " ";
	cout << "\n";
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

