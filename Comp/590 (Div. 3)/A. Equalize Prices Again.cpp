#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, a; cin >> n;
	ll s = 0;
	for(int i= 0; i< n; ++i){
		cin >> a;
		s += a;
	}
	cout << (s%n == 0 ? s/n : s/n + 1) << endl;
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

