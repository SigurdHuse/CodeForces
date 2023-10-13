#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 


int search(int cur, vector<int> &cnt, vector<vector<int>> &G){
	for(auto &next : G[cur]){
		cnt[cur] += search(next, cnt, G);
	}
	return cnt[cur];
}

void solve(){
	int n; cin >> n;
	vector<vector<int>> G(n+1);
	
	for(int i = 2; i <= n; ++i){
		int x; cin >> x;
		G[x].emplace_back(i);
	}
	vector<int> cnt(n+1, 1), cum(n+1);
	search(1, cnt, G);
	for(int i = 1; i <= n; ++i){
		cum[cnt[i]]++;
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		cum[i] += cum[i-1];
		if(i >= cum[i]) ans++;
 		cout << ans << " ";
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

