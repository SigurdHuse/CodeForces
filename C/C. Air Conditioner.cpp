#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

struct Customer{
	int t, l, r;
	
	bool operator<(const Customer& rhs){
		return t < rhs.t;
	}
};

void solve(){
	int n, m; cin >> n >> m;
	int upper = m, lower = m;
	vector<Customer> v(n);
	REP(i,n){
		cin >> v[i].t >> v[i].l >> v[i].r;
	}
	int cur_t = 0;
	
	for(int i = 0; i < n; ++i){
		int t_diff = v[i].t - cur_t;
		cur_t = v[i].t;
		upper += t_diff;
		lower -= t_diff;
		
		if((upper >= v[i].l) && (lower <= v[i].r)){
			upper = min(upper, v[i].r);
			lower = max(lower, v[i].l);
		}
		else{
			cout << "NO" << endl;
			return;
		}
		//cout << upper << " " << lower << endl;
	}
	cout << "YES" << endl;
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

