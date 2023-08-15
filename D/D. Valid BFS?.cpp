#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

vector<int> adj[N], ans;

bool vis[N];
int inputorder[N], relorder[N];

bool cmp(int a, int b){
	return relorder[a] < relorder[b];
}

void solve(){
	int n; cin >> n;
	for(int i = 0; i < n-1; ++i){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	for(int i = 0; i < n; ++i){
		cin >> inputorder[i];
		relorder[inputorder[i]] = i;
	}
	for(int i = 1; i <= n; ++i){
		sort(all(adj[i]), cmp);
	}
	
	queue<int> q;
	q.push(1);
	memset(vis, false, sizeof(vis));
	
	while(q.size()){
		queue<int> tmp;
		while(q.size()){
			int x = q.front(); q.pop();
			//cout << x << endl;
			ans.push_back(x);
			vis[x] = true;
			
			for(int j = 0; j < SZ(adj[x]); ++j){
				if(vis[adj[x][j]] == false){
					tmp.push(adj[x][j]);
				}
			}
		}
		q = tmp;
	}
	for(int i = 0; i < n; ++i){
		if(inputorder[i] != ans[i]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

