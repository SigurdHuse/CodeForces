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
	vector<int> v(n+1);
	REP(i,n) cin >> v[i];
	
	if(n == 1){
		cout << v[0] << "\n"; return;
	}
	sort(all(v));
	for(int i = 0; i < n; ++i){
		v[i+1] = max(v[i+1], v[i] + v[i+1] - 1);
	}
	cout << v[n] << "\n";
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

