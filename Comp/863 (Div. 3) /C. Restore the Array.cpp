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
	vector<int> b(n-1), ans(n);
	for(auto &x : b) cin >> x;
	
	ans[n-1] = b[n-2];
	
	for(int i = n-3; i >= 0; --i){
		if(b[i] <= b[i+1]){
			ans[i+1] = b[i];
		}
		else{
			ans[i] = b[i];
			ans[i+1] = min(ans[i+1], ans[i]);
		}
	}
	for(auto &x : ans) cout << x << " ";
	cout << endl;
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

