#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c; cin >> a >> b >> c;
	
	int one = a - 1;
	int two = abs(c - b) + abs(c - 1);
	if(one == two) cout << 3 << endl;
	else if(one < two) cout << 1 << endl;
	else cout << 2 << endl;
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

