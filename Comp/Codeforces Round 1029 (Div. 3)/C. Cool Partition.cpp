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
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	
	set<int> base, tmp;
	int ans = 0, i = 0;
	while(i < n){
		if(tmp.count(v[i]) == 0){
			base.insert(v[i]);
		}
		else if(tmp.count(v[i]) == 1){
			tmp.erase(v[i]);
		}
		if(tmp.size() == 0){
			tmp = base;
			ans++;
		}
		i++;
	}
	cout << ans << "\n";
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

