#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 


long double a, b;

long double cdf(long double k){ 
	return (k - a + 1) / (b - a +1);
}

void solve(){
	long double n; cin >> n >> b;
	a = 1;
	long double ans = 0;
	for(long double y = 1; y<= b; ++y){
		long double fac1 = 1.0, tmp1 = (y - a + 1) / (b - a + 1);
		long double fac2 = 1.0, tmp2 = (y - a) / (b - a + 1);
		REP(i,n) fac1 *= tmp1;
		REP(i,n) fac2 *= tmp2;
		ans += y*(fac1 - fac2);
	}
	
	cout << std::fixed << std::setprecision(6);
	cout << ans << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

