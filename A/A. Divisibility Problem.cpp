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
	ll a, b; cin >> a >> b;
	
	if(a <= b){
		cout << b -a << "\n";
		return;
	}
	
	if(a % b == 0){
		cout << "0\n";
		return;
	}
	
	cout << b * ( (a / b) + 1) - a << "\n";
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

