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
	int n, t; cin >> n >> t;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int cur = 0, l = 0, ans = 0;
	
	for(int r = 0; r < n; ++r){
		cur += v[r];
		while(cur > t){
			cur -= v[l];
			l++;
		}
		ans = max(ans, r -l + 1);
	}
	cout <<ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

