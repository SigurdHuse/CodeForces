#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	if(n == 1){
		cout << 2 << endl;
		return;
	}
	if(n % 3 == 0) cout << n / 3 << endl;
	else if(n % 3 == 2) cout << n / 3 + 1 << endl;
	else{
		// n % 3 == 1
		// two steps from n we do 2
		cout << n/3 + 1 << endl;
		
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

