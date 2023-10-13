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
	vector<double> cor(n), speed(n);
	for(auto &x : cor) cin >> x;
	for(auto &x : speed) cin >> x;
	
	double l = 0;
	double r = 1e10;
	double mid;
	
	while(abs(r - l) > 1e-8){
		mid = l + (r - l)/2;
		double L = DBL_MIN, R = DBL_MAX;
		
		for(int i = 0; i < n; ++i){
			L = max(L, cor[i] - mid*speed[i]);
			R = min(R, cor[i] + mid*speed[i]);
		}
		if(L <= R){
			r = mid;
		}
		else l = mid;
	}
	cout << setprecision(16);
	//cout << l << " " << r << endl;
	cout << l + (r - l)/2 << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

