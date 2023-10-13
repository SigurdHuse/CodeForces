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
	vector<ll> v(n+2);
	for(int i = 1; i <= n; ++i){
		cin >> v[i];
		v[i] += v[i-1];
	}
	v[n+1] = v[n];
	set<int> used;
	used.insert(0);
	used.insert(n+1);
	
	set<ll> cur;
	cur.insert(v[n]);
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		auto low = used.upper_bound(x);
		low--;
		auto high = used.upper_bound(x);
		
		ll val = v[*high-1] - v[*low];
		
		if(x == 1){
			val = v[*high-1] - v[0];
			cur.insert(v[*high-1]- v[x]);
		}
		else if(x == n){
			cur.insert(v[x-1] - v[*low]);
		}
		else{
			cur.insert(v[x-1] - v[*low]);
			cur.insert(v[*high-1]- v[x]);
		}
		used.insert(x);
		cur.erase(val);
		//cout << *high-1 << " " << *low << endl;
		
		cout << *(--cur.end()) << "\n";
	}
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

