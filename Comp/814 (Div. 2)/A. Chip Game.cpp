#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We use that:
// odd + even  = odd
// odd + odd   = even
// even + even = even

void solve(){
	int n, m; cin >> n >> m;
	
	if(n% 2 == 0 && m % 2 == 0) cout << "Tonya" << endl;
	else if(n% 2 == 0 || m % 2 == 0) cout << "Burenka" << endl;
 	else cout << "Tonya" << endl;
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

