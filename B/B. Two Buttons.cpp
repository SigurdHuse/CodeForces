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
	int num, cnt = 0;
	
	bool operator<(const Node& rhs) const{
		return cnt > rhs.cnt;
	}
};

void solve(){
	int n, m; cin >> n >> m;
	if(n >= m){
		cout << n - m << endl;
		return;
	}
	
	queue<Node> q;
	Node tmp;
	tmp.num = n;
	tmp.cnt = 0;
	q.push(tmp);
	int ans = INT_MAX;

	vector<bool> vis(200005);
	vis[n] = 1;
	while(q.size()){
		Node cur = q.front(); q.pop();
		//cout << dist[cur.num] << " ";
		if(cur.num == m){
			ans = cur.cnt;
			break;
		}
		tmp = cur;
		tmp.num--;
		tmp.cnt++;
		if((tmp.num > 0) && (!vis[tmp.num])){
			vis[tmp.num] = 1;
			q.push(tmp);
		}
		tmp = cur;
		if(cur.num > m) continue;
		tmp.num *= 2;
		tmp.cnt++;
		if(!vis[tmp.num]){
			q.push(tmp);
			vis[tmp.num] = 1;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

