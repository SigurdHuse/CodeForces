#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 10;

int a[N];

// Sort of bucket sort

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	int ans = 0, mi = a[0], smallest_lucky = INT_MAX;
	
	for(int i = 1; i < n; ++i){
		mi = min(mi, a[i]);
		if(a[i] > mi){
			if(a[i] < smallest_lucky){
				ans++;
				smallest_lucky = a[i];
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

