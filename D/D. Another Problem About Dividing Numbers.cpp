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
	int a, b, k; cin >> a >> b >> k;
	int m;
	
	if(a == b) m = 0;
	else if(__gcd(a,b) == a) m = 1;
	else if(__gcd(a,b) == b) m = 1;
	else m = 2;
	
	int n = 0, tmp = max(a,b);
	
	for(int i = 2; i*i <= tmp; ++i){
		while(a % i == 0){
			n++;
			a /= i;
		}
		while(b % i == 0){
			n++;
			b /= i;
		}
	}
	if(a != 1) n++;
	if(b != 1) n++;
	//cout << m << " " << n <<  endl;
	if((m == 1) && (k == 1)){
		if((m <= k) && (k <= n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else{
		if(k == 1) cout << "NO" << endl;
		else if((m <= k) && (k <= n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
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

