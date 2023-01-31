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
	int cur, idx, cnt;
};

// Need DFS and not BFS for memory usage

void solve(){
	int n; cin >> n;
	vector<int> v(n+1);
	for(int i = 1; i <= n; ++i) cin >> v[i];
	
	int ans = 1;
	stack<Node> q;
	Node tmp;
	
		
	for(int j = 1; j <= n; ++j){
		tmp.cnt = 1;
		tmp.idx = j;
		tmp.cur = v[j];
		q.push(tmp);
		while(q.size()){
			Node cur = q.top(); q.pop();
			//cout << cur.cur << " " << cur.idx<< " " << cur.cnt << endl;
			for(int i = 2*cur.idx; i <= n; i += cur.idx){
				if((i % cur.idx == 0) && (cur.cur < v[i])){
					tmp = cur;
					tmp.cnt++;
					tmp.idx = i;
					tmp.cur = v[i];
					ans = max(ans, tmp.cnt);
					if(tmp.idx <= n) q.push(tmp);
				}
			}
			
		}
	}
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

