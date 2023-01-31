#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

struct Node{
	int t_idx, last_idx, max_diff = 1;
};

void solve(){
	int n, m; cin >> n >> m;
	string s, t; cin >> s >> t;
	stack<Node> q;
	
	vector<vector<int>> v(26);
	for(int i = 0; i < n; ++i){
		v[s[i] - 'a'].push_back(i); 
	}
	
	Node tmp;
	for(int i : v[t[0] - 'a']){
		tmp.t_idx = 1;
		tmp.last_idx = i;
		q.push(tmp);
	}
	int ans = 1;
	while(q.size()){
		Node cur = q.top(); q.pop();
		if(cur.t_idx == m){
			ans = max(ans, cur.max_diff);
			continue;
		}
		tmp.t_idx = cur.t_idx + 1;
		for(int i : v[t[cur.t_idx] - 'a']){
			if(i <= cur.last_idx) continue;
			tmp.max_diff = max(cur.max_diff, i - cur.last_idx);
			tmp.last_idx = i;
			q.push(tmp);
		}
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

