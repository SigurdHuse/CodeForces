#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 5;

struct Edge{
	int from, to, next;
} edge[N];

int head[N], tot;

inline void addedge(int u, int v){
	edge[++tot] = (Edge){u,v,head[u]}, head[u] = tot;
}

int f[N][26], n, m, d[N];
char s[N];

queue<int> Q;

void solve(){
	cin >> n >> m;
	cin >> s;
	
	for(int i = 1; i <= m; ++i){
		int x, y; cin >> x >> y;
		addedge(x, y);
		d[y]++;
	}
	
	for(int i = 1; i <= n; ++i){
		if(!d[i]){
			Q.push(i);
			f[i][s[i-1] - 'a'] = 1;
		}
	}
	
	int rem = n;
	while(Q.size()){
		int now = Q.front();
		Q.pop();
		rem--;
		
		for(int i = head[now]; i; i = edge[i].next){
			Edge e = edge[i];
			
			for(int j = 0; j < 26; ++j){
				f[e.to][j] = max(f[e.to][j], f[now][j] + (s[e.to-1] - 'a' == j));
			}
			d[e.to]--;
			if(!d[e.to]) Q.push(e.to);
		}
	}
	
	if(rem){
		cout << -1 << endl;
		return;
	}
	int ans = 0;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j < 26; ++j){
			ans = max(ans, f[i][j]);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

