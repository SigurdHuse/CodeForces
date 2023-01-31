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
	int n;
	double x0, y0; cin >> n >> x0 >> y0;
	vector<pair<double,double>> v(n);
	for(auto &[x,y] : v) cin >> x >> y;
	vector<bool> shot(n);
	
	int ans = 0;
	
	bool down = 0, right = 0, line = 0;
	
	double slope, a0;
	double eps = 1e-8;
	for(int i = 0; i < n; ++i){
		if(shot[i]) continue;
		ans++;
		if(v[i].f == x0) down = 1;
		else if(v[i].s == y0) right = 1;
		else{
			line = 1;
			slope = (y0 - v[i].s)/(x0 - v[i].f);
			a0 = y0 - slope*x0;
		}
		for(int j = i+1; j < n; ++j){
			if(down){
				if(v[j].f == x0) shot[j] = 1;
			}
			else if(right){
				if(v[j].s == y0) shot[j] = 1;
			}
			else if(line){
				if(abs(slope*v[j].f + a0 - v[j].s) < eps) shot[j] = 1;
			}
			
		}
		down = 0; right = 0; line = 0;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

