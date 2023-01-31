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
	int n, r, s; cin >> n >> s >> r;
	vector<int> v(n);
	int mx = s - r;
	v[0] = mx;
	s -= v[0];
	
	// n - i + 1 left
	for(int i = 1; i < n; ++i){
		v[i] = min(mx, s - (n - i - 1));
		s -= v[i];
	}
	for(int i : v) cout << i<< " ";
	cout<< endl;
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

