#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int n, k; 
int cur[26];
vector<int> path;

void dfs(int v){
	while(cur[v] < k){
		int u = cur[v]++;
		dfs(u);
		path.push_back(u);
	}
}

void solve(){
	cin >> n >> k;
	dfs(0);
	cout << 'a';
	for(int i = 0; i < n-1; ++i){
		cout << char(path[i % SZ(path)] + 'a');
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

