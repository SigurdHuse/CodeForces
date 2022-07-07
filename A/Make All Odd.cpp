#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, a,n;
	cin >> tt;
	while(tt--){
		int odd = 0, even = 0;
		cin >> n;
		REP(_,n){
			cin >> a;
			if(a%2)odd++;
			else even++;
		}
		if(odd == 0) cout << -1 << endl;
		else cout << even << endl;
	}
}
