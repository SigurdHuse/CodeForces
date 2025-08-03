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
	int n, s; cin >> n  >> s;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int one = abs(v[0] - s) + v[n-1] - v[0];
	int two = abs(v[n-1] - s) + v[n-1] - v[0];
	cout << min(one, two) << "\n"; 
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

