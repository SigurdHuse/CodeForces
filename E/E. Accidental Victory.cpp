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
	
	for(int i = 1; i <= n; ++i){
		cin >> v[i-1].f;
		v[i-1].s = i;
	}
	sort(all(v));
	int idx = 0;
	ll s = 0;
	
	for(int i = 0; i < n-1; ++i){
		if(v[i].f + s < v[i+1].f){
			idx = i+1;
		}
		s += v[i].f;
	}
	
	cout << n - idx << endl;
	vector<int> ans(n-idx);
	for(int i = idx; i < n; ++i){
		ans[n - i - 1] = v[i].s;
	}
	sort(all(ans));
	for(int i : ans) cout << i << " ";
	cout << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

