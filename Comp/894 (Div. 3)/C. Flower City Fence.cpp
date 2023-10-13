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

int a[N], rev[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	a[n] = INT_MAX - 1;
	int idx = 0;
	for(int i = n-1; i >= 0; --i){
		for(int j = idx; j < min({n,idx + a[i] + (n-1) - i, a[i+1]}); ++j){
			rev[j] = i + 1;
		}
		idx = a[i];
	}
	for(int i = 0; i < n; ++i){
		if(a[i] != rev[i]){
			cout << "NO\n";
			return;
		}
	}
	
	
	cout << "YES\n";
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

