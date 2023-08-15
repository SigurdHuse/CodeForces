#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

map<int,vector<int>> m;
vector<bool> used;

int go(int v){
	used[v] = true;
	for(auto now : m[v]){
		if(!used[now]) return go(now) + 1;
	}
	return 1;
}

void solve(){
	int n, x, y; cin >> n;
	m.clear();
	used.clear();
	used.resize(n+1, false);
	
	bool fault = false;
	for(int i = 0; i < n; ++i){
		cin >> x >> y;
		m[x].push_back(y);
		m[y].push_back(x);
		if(x == y || m[x].size() > 2 || m[y].size() > 2) fault = true;
	}	
	
	if(fault){
		cout << "NO\n";
		return;
	}
	
	for(int i = 0; i < n; ++i){
		if(!used[i + 1]){
			if(go(i+1)%2){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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

