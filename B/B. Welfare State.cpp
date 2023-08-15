#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n+1);
	for(int i = 1; i <= n; ++i) cin >> v[i];
	
	int q; cin >> q;
	int ev, p, x;
	
	int max_x = 0;
	
	set<int> changed, master;
	
	
	while(q--){
		cin >> ev;
		if(ev == 1){
			cin >> p >> x;
			v[p] = x;
			changed.insert(p);
			master.insert(p);
		}
		else{
			cin >> x;
			max_x = max(max_x,x);
			
			for(int i : changed){
				v[i] = max(v[i], x);
			}
			changed.clear();
		}
	}
	
	for(int i = 1;i <= n; ++i){
		if(master.count(i)) cout << v[i] << " ";
		else cout << max(v[i], max_x) << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

