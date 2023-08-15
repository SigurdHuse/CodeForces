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
	long double m, n; cin >> m >> n;
	long double ans = 0;
	
	for(int i = 1; i <= m; ++i){
		ans += i * (pow(i / m,n) - pow((i-1)/m,n));
	}
	cout << setprecision(16);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

