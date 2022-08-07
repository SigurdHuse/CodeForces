#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Just go to the nearest each time

int n; 

ll ans;

void search(ll steps, int cnt, int x, int y, vector<pair<int,int>> v){
	vector<int> best;
	if(cnt == n){
		ans = min(ans, steps + abs(x) + abs(y));	
		return;
	}
	int best_dist = INT_MAX;
	for(int i = 0; i < n; ++i){
		if(v[i].f == -1000) continue;
		if(abs(v[i].f - x) + abs(v[i].s - y) < best_dist){
			best.clear();
			best.push_back(i);
			best_dist = abs(v[i].f - x) + abs(v[i].s - y);
		}
		if(abs(v[i].f - x) + abs(v[i].s - y) == best_dist){
			best.push_back(i);
		}
	}
	for(int i : best){
		vector<pair<int,int>> tmp = v;
		x = v[i].f; y = v[i].s;
		tmp[i].f = -1000;
		search(steps + best_dist ,cnt+1, x, y, tmp);
	}
}


void solve(){
	cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	ans = LONG_LONG_MAX;
	search(0ll,0,0,0,v);
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

