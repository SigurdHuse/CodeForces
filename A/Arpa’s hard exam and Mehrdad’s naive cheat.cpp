#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if(n == 0) cout << 1 << endl;
	else if(n%4 == 1) cout << 8 <<endl;
	else if(n%4 == 2) cout << 4 << endl;
	else if(n%4 == 3) cout << 2 << endl;
	else cout << 6 << endl;
}
