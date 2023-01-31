#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1005;

int deg[N];

//int search(int cur){
	//if(SZ(G[cur]) == 1){
		//children[cur] = 0;
		//return 1;
	//}
	//for(int next : G[cur]){
		//children[cur] += search(next);
	//}
	//return children[cur];
//}

void solve(){
	int n, x; cin >> n >> x;
	int u,v;
	vector<int> G[N];
	for(int i = 0; i < n-1; ++i){
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	if((SZ(G[x]) == 1) || (n == 1)){
		cout << "Ayush" << endl;
		return;
	}
	
	for(int i = 1; i <= n; ++i){
		deg[i] = SZ(G[i]);
	}
	//search(1);
	//for(int i = 1; i <= n; ++i){
		//cout << children[i] << " ";
	//}
	//cout << endl;
	
	for(int turn = 1; turn <= n; ++turn){
		bool changed = 0;
		for(int i = 1; i <= n; ++i){
			if(deg[i] == 1){
				auto it = find(all(G[i]), x);
				if(it == G[i].end()){
					for(int j : G[i]){
						deg[j]--;
					}
					deg[i] = -1;
					changed = 1;
					break;
				}
				else if(deg[x] > 2){
					for(int j : G[i]){
						deg[j]--;
					}
					deg[i] = -1;
					changed = 1;
					break;
				}
			}
		}
		if(!changed){
			//cout << turn << endl;
			if(turn & 1) cout << "Ashish" << endl;
			else cout << "Ayush" << endl;
			return;
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

