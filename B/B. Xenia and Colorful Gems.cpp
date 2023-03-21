#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

ll a[N], b[N], c[N];

ll compute(ll x, ll y, ll z){
	return (x - y)*(x - y) + (y - z)*(y - z) + (z - x)*(z - x);
}

void solve(){
	int nr, ng, nb; cin >> nr >> ng >> nb;
	REP(i,nr) cin >> a[i];
	REP(i, ng) cin >> b[i];
	REP(i, nb) cin >> c[i];
	sort(a, a + nr);
	sort(b, b + ng);
	sort(c, c + nb);
	ll ans = LLONG_MAX;
	
	for(int i = 0; i < nr; ++i){
		auto it1 = upper_bound(b, b + ng, a[i]);
		auto it2 = upper_bound(c, c + nb, a[i]);
		if(it1 == (b + ng)) it1--;
		if(it2 == (c + nb)) it2--;
		ans = min(ans, compute(a[i], *it1, *it2));
		if(it1 != b){ 
			it1--;
			ans = min(ans, compute(a[i], *it1, *it2));
			it1++;
		}
		if(it2 != c){
			it2--;
			ans = min(ans, compute(a[i], *it1, *it2));
			it2++;
		}
		
		if((it1 != b) && (it2 != c)){
			it1--; it2--;
			ans = min(ans, compute(a[i], *it1, *it2));
		}
	}
	
	for(int i = 0; i < ng; ++i){
		auto it1 = upper_bound(a, a + nr, b[i]);
		auto it2 = upper_bound(c, c + nb, b[i]);
		if(it1 == (a + nr)) it1--;
		if(it2 == (c + nb)) it2--;
		ans = min(ans, compute(*it1, b[i], *it2));
		if(it1 != a){ 
			it1--;
			ans = min(ans, compute(*it1, b[i], *it2));
			it1++;
		}
		if(it2 != c){
			it2--;
			ans = min(ans, compute(*it1, b[i], *it2));
			it2++;
		}
		
		if((it1 != a) && (it2 != c)){
			it1--; it2--;
			ans = min(ans, compute(*it1, b[i], *it2));
		}
	}
	
	for(int i = 0; i < nb; ++i){
		auto it1 = upper_bound(a, a + nr, c[i]);
		auto it2 = upper_bound(b, b + ng, c[i]);
		if(it1 == (a + nr)) it1--;
		if(it2 == (b + ng)) it2--;
		ans = min(ans, compute(*it1, *it2, c[i]));
		if(it1 != a){ 
			it1--;
			ans = min(ans, compute(*it1, *it2, c[i]));
			it1++;
		}
		if(it2 != b){
			it2--;
			ans = min(ans, compute(*it1, *it2, c[i]));
			it2++;
		}
		
		if((it1 != a) && (it2 != b)){
			it1--; it2--;
			ans = min(ans, compute(*it1, *it2, c[i]));
		}
	}
	
	cout << ans << endl;
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

