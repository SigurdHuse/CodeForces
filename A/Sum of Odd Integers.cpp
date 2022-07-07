#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	ll n, k;
	cin >> tt;
	while(tt--){
		cin >> n >> k;
		if(n % 2){
			if(k%2 == 0 || k*k > n) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
		else{
			if(k % 2 || k*k > n) cout << "NO" <<endl;
			else cout << "YES" << endl;
		}
	}
}
