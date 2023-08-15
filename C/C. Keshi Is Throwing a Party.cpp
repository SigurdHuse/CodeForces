#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int maxn = 2e5 + 5;

int n, a[maxn], b[maxn];

bool ok(int x){
	int c = 0;
	for(int i = 0; i < n; ++i){
		if(x - 1 - a[i] <= c && c <= b[i]) c++;
	}
	return c >= x;
}

void solve(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i] >> b[i];
	}
	int l = -1, r = n+1, mid;
	while(r - l > 1){
		mid = (l + r)/2;
		if(ok(mid)) l = mid;
		else r = mid;
	}
	cout << l<< endl;
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

