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
	vector<pair<int,int>> v(n);
	
	for(auto &[x, h] : v) cin >> x >> h;

	int ans = min(n,2);
	
	for(int i = 1; i< n-1; ++i){
		if(v[i].f - v[i].s > v[i-1].f){
			ans++;
		}
		else if(v[i].f + v[i].s < v[i+1].f){
			ans++;
			v[i].f += v[i].s;
		}
	}
	cout << ans << endl;
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

