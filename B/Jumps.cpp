#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int x;
	cin >> x;
	ll n= 0;
	while(n*(n+1)/2 < x){
		n++;
	}
	if(n*(n+1)/2 == x + 1)n++;
	cout << n << endl;
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

