#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Adjacency matrix for char

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	vector<bool> seen(26), visited(26);
	vector<vector<bool>> G(26, vector<bool>(26));
	string s;
	for(int _ = 0; _ < n; ++_){
		cin >> s;
		int n1 = SZ(s);
		for(int i = 0; i < n1; ++i){
			seen[s[i] - 'a'] = 1;
			for(int j = i + 1; j < n1; ++j){
				G[s[i] - 'a'][s[j] - 'a'] = 1;
				G[s[j] - 'a'][s[i] - 'a'] = 1;
			}
		}
	}
	queue<int> q;
	int ans = 0;
	for(int i = 0; i < 26; ++i){
		if(seen[i]){
			ans++;
			q.push(i);
			while(q.size()){
				int u = q.front(); q.pop();
				for(int j = 0; j < 26; ++j){
					if(j == u) continue;
					if(G[u][j] && seen[j]){
						seen[j] = 0;
						q.push(j);
					}
				}
			}
		}
	}
	
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

