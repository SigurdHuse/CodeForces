#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	int ans = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] <= n/2){
			if(a[i] != i+1){
				ans = max(ans, a[i]);
			}
		}
		else{
			if(a[i] != i+1){
				ans = max(ans, n - a[i] + 1);
			}
		}
	}
	cout << ans/2 << "\n";
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

