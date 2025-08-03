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
	int n; cin >> n;
	
	cout << 2*n - 1<< "\n";
	for(int i = 1; i < n; ++i){
		cout << i << " " << 1 << " " << i << "\n";
		cout << i << " " << i+1 << " " << n << "\n"; 
	}
	cout << n << " 1 " << n << "\n";
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

