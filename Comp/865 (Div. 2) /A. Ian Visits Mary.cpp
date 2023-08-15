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
	int a, b; cin >> a >> b;
	
	if(a == 1 || b == 1){
		cout << 1 << endl;
		cout << a << " " << b << endl;
		return;
	}
	
	cout << 2 << endl;
	cout << a-1 << " " << 1 << endl;
	cout << a << " " << b << endl;
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

