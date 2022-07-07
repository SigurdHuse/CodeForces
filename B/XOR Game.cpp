#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,a,b;
	cin >> tt;
	while(tt--){
		cin >> a >> b;
		int comp = max(a,b), ans = 0;
		while(ans < comp) ans = 2*ans + 1;
		cout << ((a^b) == ans ? "NO":"YES") << endl;
	}
}
