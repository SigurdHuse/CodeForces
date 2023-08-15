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

int a[N], b[N], c[N];

void solve(){
	int n, x; cin >> n >> x;
	REP(i,n) cin >> a[i];
	REP(i,n) cin >> b[i];
	REP(i,n) cin >> c[i];
	
	int ans = 0;
	
	for(int i = 0; i < n; ++i){
		int tmp = (ans | a[i]);
		if((tmp <= x) && ((tmp | x) <= x)){
			ans |= a[i];
		}
		else break;
	}
	for(int i = 0; i < n; ++i){
		int tmp = (ans | b[i]);
		if((tmp <= x) && ((tmp | x) <= x)){
			ans |= b[i];
		}
		else break;
	}
	for(int i = 0; i < n; ++i){
		int tmp = (ans | c[i]);
		if((tmp <= x) && ((tmp | x) <= x)){
			ans |= c[i];
		}
		else break;
	}
	cout << (ans == x ? "Yes" : "No") << endl;
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

