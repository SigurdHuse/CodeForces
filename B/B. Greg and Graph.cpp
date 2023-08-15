#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 505;

ll adj[N][N], ans[N];

int del[N];
bool f[N];

void solve(){
	ans[0] = 0;
	memset(f, false, sizeof(f));
	int n; cin >> n;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			cin >> adj[i][j];
			ans[0] += adj[i][j];
		}
	}
	for(int i = n;i >= 1; --i){
		cin >> del[i];
	}
	
	for(int x = 1; x <= n; ++x){
		ans[x] = 0;
		int k = del[x];
		f[k] = true;
		
		for(int i = 1; i <= n; ++i){
			for(int j= 1; j <= n; ++j){
				adj[i][j] = min(adj[i][j], adj[i][k] +adj[k][j]);
				if(f[i] && f[j]){
					ans[x] += adj[i][j];
				}
			}
		}
		
	}
	for(int i = n; i >= 1; --i){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

