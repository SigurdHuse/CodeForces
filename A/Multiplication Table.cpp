#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x, ans = 0;
	cin >> n >> x;
	for(int i = 1; i <= min(x, n); ++i){
		if((x%i == 0) && x/i <= n) ans++;
	}
	cout << ans << endl;
}
