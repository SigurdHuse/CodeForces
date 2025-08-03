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
	
	bool lose = 0, one = 0;
	
	for(int i = 0; i < n; ++i){
		if(v[i] == 0){
			if(lose){
				cout << "YES\n"; return;
			}
			lose = 1;
			one = 1;
		}
		else lose = 0;
	}
	if(one == 0) cout << "YES\n";
	else cout << "NO\n";
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

