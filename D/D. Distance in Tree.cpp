#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 5e4 + 7;

ll dp[N][507];
int parent[N];

vector<int> tree[N];

ll rec(int n, int k, int baap){
	ll ret = 0;
	if(dp[n][k] != -1) return dp[n][k];
	else if(k == 0) return 1;
	
	else{
		for(auto &x : tree[n]){
			if(x != baap){
				ret += rec(x, k-1, n);
			}
		}
	}
	return dp[n][k] = ret;
}

void dfs(int n, int baap){
	parent[n] = baap;
	for(auto &x : tree[n]){
		if(x != baap) dfs(x, n);
	}
}

void solve(){
	int n, k; cin >> n >> k;
	
	
	for(int i = 0; i < n-1; ++i){
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
        tree[b].push_back(a);
	}
	
	for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = -1;
        }
    }
    dfs(1,0);
    ll ans = 0;
    
    for(int i = 1; i <= n; ++i){
		ll a = rec(i, k, parent[i]), b = 0;
		for(auto &x : tree[i]){
			if(x != parent[i]){
				for(int l = 1; l < k; ++l){
					b += rec(x, l-1, i)* (rec(i, k-l, parent[i]) - rec(x, k-l-1, i));
				}
			}
		}
		ans += (a + b/2);
	}    
	cout << ans;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

