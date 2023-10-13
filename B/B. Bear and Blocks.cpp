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
	vector<int> v(n), mi(n);
	for(auto &x : v) cin >> x;
	
	int ans = n/2 + (n & 1);
	for(int i = 1; i < n-1; ++i){
		if(v[i] >= v[i-1] && v[i] >= v[i+1]){
			mi[i] = min(v[i-1], v[i+1]);
		}
		else{
			mi[i] = v[i] - 1;
		}
	}
	ans = min(ans, *max_element(all(mi)));
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

