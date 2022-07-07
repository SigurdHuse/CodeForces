#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if(n < m) cout << -1 << endl;
	else{
		n += n%2;
		n /= 2;
		while(n%m) n++;
		cout << n << endl;
	}
}
