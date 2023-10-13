#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int a[N], l, r, n, m, x;

void solve(){
	cin >> n >> m;
	memset(a, 0, (n + 2) * sizeof(int));
	// first is right, second is score
	vector<vector<pair<int,int>>> v(n+1);
	for(int i = 0; i < m; ++i){
		cin >> l >> r;
		v[l].push_back({r, (r - l + 1)/2 + 1});
	}
	int q; cin >> q;
	vector<int> cur(q);
	for(auto &e : cur) cin >> e;
	for(int it = 1; it <= q; ++it){
		x = cur[it-1];
		for(int i = x; i > 0; --i){
			for(auto &p : v[i]){
				if(p.f < x) continue;
				p.s--;
				if(p.s == 0){
					cout << it << "\n";
					return;
				}
			}
		}
	}
	cout << "-1\n";
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

