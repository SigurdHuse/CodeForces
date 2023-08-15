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
	vector<double> v(n), t(n);
	for(auto &x : v) cin >> x;
	for(auto &x : t) cin >> x;
	
	double l = 0, r = *max_element(all(v));
	while(abs(r - l) >= 1e-6){
		//cout << l << " " << r << endl;
		double mid = (r + l)/2;
		double mid1 = (l + mid)/2;
		double mid2 = (mid + r)/2;
		
		double mi1 = 0, mi2 = 0; 
		
		for(int i = 0; i < n; ++i){
			mi1 = max(mi1, abs(mid1 - v[i]) + t[i]);
			mi2 = max(mi2, abs(mid2 - v[i]) + t[i]);
		}
		if(mi1 < mi2){
			r = mid;
		}
		else l = mid;
	}
	cout << setprecision(16);
	cout << l << endl;
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

