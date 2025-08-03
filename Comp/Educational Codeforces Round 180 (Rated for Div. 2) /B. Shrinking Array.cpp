#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e3 + 5;

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	int ans = 1e9;
	for(int i = 0; i < n-1; ++i){
		if(abs(a[i+1] - a[i]) <= 1){
			cout << "0\n"; return;
		}
		int mi = min(a[i+1], a[i]) - 1, mx = max(a[i+1], a[i]) + 1;
		for(int j = i+2; j < n; ++j){
			if(a[j] >= mi && a[j] <= mx){
				ans = min(ans, j - i - 1);
			}
		}
	}
	for(int j = n - 3; j >= 0; --j){
		int mi = min(a[n-1], a[n-2]) - 1, mx = max(a[n-1], a[n-2]) + 1;
		if(a[j] >= mi && a[j] <= mx){
			ans = min(ans, n - 1 - j - 1);
		}
	}
	cout << (ans == 1e9 ? -1 : ans) << "\n";
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

