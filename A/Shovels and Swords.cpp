#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	ll a, b;
	while(tt--){
		cin >> a >> b;
		cout << min({a,b,(a+b)/3}) << endl;
	}
}
