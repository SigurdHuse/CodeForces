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
	string a; cin >> a;
	map<int,ll> d;
	d[0] = 1;
	
	ll res = 0, s = 0;
	
	for(int i = 0; i < n; ++i){
		s += a[i] - '0';
		int x = s - i - 1;
		if(!d.count(x)){
			d[x] = 0;
		}
		d[x] += 1;
		res += d[x] - 1;
	}
	
	cout << res<< endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

