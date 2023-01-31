#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int a[100005], b[100005];

int n;

void solve(){
	cin >> n;
	
	int m = 1000000000, k = 0;
	REP(i,n){
		cin >> a[i];
		b[i] = a[i];
		m = min(a[i], m);
	}
	sort(b, b+n);
	
	for(int i = 0; i < n; ++i){
		if(a[i] != b[i] && a[i] % m > 0){
			k = 1;
		}
	}
	
	cout << (k ? "NO" : "YES") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

