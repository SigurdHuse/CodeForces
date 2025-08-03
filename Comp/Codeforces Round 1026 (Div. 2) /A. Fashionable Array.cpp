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
	for(auto &x : v) cin>> x;
	
	sort(all(v));
	
	int ans = n-1;
	for(int i = 0; i < n; ++i){
		for(int j = n - 1; j > i; --j){
			if((v[i] + v[j]) % 2 == 0){
				ans = min(ans, i + n - 1 - j);
			}
		}
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

