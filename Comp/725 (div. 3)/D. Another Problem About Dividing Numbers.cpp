#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int a,b,k; cin >> a >> b >> k;
	vector<int> fac1, fac2;
	while(a % 2 == 0){
		fac1.push_back(2);
		a /= 2;
	}
	while(b%2 == 0){
		fac1.push_back(2);
		b /= 2;
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

