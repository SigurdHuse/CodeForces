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
	int cur = 0;
	int left_moves = 0;
	int visited = 0;
	int idx = 0;
	bool moved_left = 0;
};

void solve(){
	int n, k, z; cin >> n >> k >> z;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	Node tmp;
	tmp.cur = v[0];
	int ans = 0;
	stack<Node> q;
	q.push(tmp);
	
	while(q.size()){
		Node cur = q.top(); q.pop();
		if(cur.visited == k){
			ans = max(cur.cur, ans);
			continue;
		}
		if((cur.left_moves < z)&& (!cur.moved_left) && (cur.idx > 0)){
			tmp.moved_left = 1;
			tmp.left_moves = cur.left_moves + 1;
			tmp.visited = cur.visited + 1;
			tmp.cur = cur.cur+ v[cur.idx - 1];
			tmp.idx = cur.idx-1;
			q.push(tmp);
		}
		if(cur.idx < n){
			tmp.moved_left = 0;
			tmp.left_moves = cur.left_moves;
			tmp.visited = cur.visited + 1;
			//cout << n + cur.visited - k+1 << endl;
			//cout << "Current : " << cur.idx << " "<< cur.visited <<  endl;
			tmp.cur = cur.cur + v[cur.idx + 1];
			tmp.idx = cur.idx + 1;
			q.push(tmp);
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

