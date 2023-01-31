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
	int n,d; cin >> n >> d;
	
	vector<pair<int,int>> v(n);
	
	REP(i,n) cin >> v[i].f >> v[i].s;
	sort(all(v));
	
	ll ans = 0, cur = 0;
	
	int l = 0;
	for(int r = 0; r < n; ++r){
		cur += v[r].s;
		while(v[r].f - v[l].f >= d){
			cur -= v[l].s;
			l++;
		}
		ans = max(ans, cur);
	}
	cout << ans<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

