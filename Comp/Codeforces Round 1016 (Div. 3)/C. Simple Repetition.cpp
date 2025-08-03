#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool is_prime(int x){
	if(x == 1) return false;

	for(int i = 2; i*i <= 2*x; i++){
		if(x % i == 0) return false;
	}
	return true;
}

void solve(){
	int x, k; cin >> x >> k;
	if(k > 1 && x > 1) cout << "NO\n";
	else if(k == 1)cout << (is_prime(x) ? "YES\n" : "NO\n");
	else cout << ((k==2) ? "YES\n" : "NO\n");
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

