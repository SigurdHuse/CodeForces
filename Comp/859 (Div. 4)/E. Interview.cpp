#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int a[N], cum[N], n;

bool guess(int l, int r){
	fflush(stdout);
	cout << "? " << r - l + 1 << " ";
	for(int i = l; i <= r; ++i){
		cout << i << " ";
	}
	cout << endl;
	fflush(stdout);
	int m; cin >> m;
	if(m == (cum[r] - cum[l-1])) return 1;
	else return 0;
	
}


void solve(){
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	memset(cum, 0, sizeof cum);
	for(int i = 1; i <= n; ++i){
		cum[i] = a[i] + cum[i-1];
	}
	
	int l = 1, r = n;
	
	while(l < r){
		int mid = (l + r)/2;
		if(guess(l, mid)){
			l = mid + 1;
		}
		else r = mid;
	}
	
	cout << "! " << l << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

