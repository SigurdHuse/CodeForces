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
	ll n; cin >> n;
	if(n == 1 || n == 2){
		cout << "-1\n";
		return;
	}
	if(!(n & 1)){
		cout << (n*n/4 - 1) << " ";
		cout << (n*n/4 + 1) << "\n";
	}
	else{
		cout << ((n*n - 1)/2)<< " ";
		cout << ((n*n + 1)/2) << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

